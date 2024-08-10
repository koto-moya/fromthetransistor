module uart 
   #(parameter CLCKS_PER_BIT = 87)
    (
    input clk_i,
    input i_rx_serial,
    output o_rx_DV,
    output [7:0], o_rx_Byte   
    );

   // these parameters are the states the machine can be in hence the s_ prefix
   parameter s_idle = 3'b000;
   parameter s_rx_start_bit = 3'b001;
   parameter s_rx_data_bits = 3'b010;
   parameter s_rx_stop_bit = 3'b011;
   parameter s_cleanup - = 3'b100;

   // these are the registers
   reg r_rx_data_r = 1'b1;
   reg r_rx_data = 1'b1;
   reg [7:0] r_Clock_count = 0;
   reg [2:0] r_bit_index = 0;
   reg [7:0] r_rx_Byte = 0;
   reg r_rx_DV = 0;
   reg [2:0] r_SM_Main = 0;

   // Now we actually start controlling the reciever

   always @(posedge clk_i) begin
        case (r_SM_Main)
          // this chunk is checking if the start bit has been detected.  
          // If not, keep the machine in an idle state
          s_idle:
            begin
                 r_rx_DV <= 1'b0;
                 r_Clock_count <= 0;
                 r_bit_index <= 0;
                 if (r_rx_data == 1'b0)
                    r_SM_Main <= s_rx_start_bit;
                 else
                    r_SM_Main <= s_idle
            end

          // This chunk checks if the start bit has been received.
          // If yes, set the state of the machine to sampling the data
          // if not, keep the machine in an idle state
          // does all this if we are at the middle of a given bit signal
          // If not, increment the clock count by 1 and keep the machine in the start bit state
          // unitl we hit the middle of the start bit  
          s_rx_start_bit:
            begin 
                 if (r_Clock_count == (CLCKS_PER_BIT-1)/2)
                  begin 
                        if (r_rx_data == 1'b0)
                            begin
                                r_Clock_count <= 0;
                                r_SM_Main <= s_rx_data_bits;
                            end
                        else
                            r_SM_Main <= s_idle;
                 else
                    begin
                        r_Clock_count <= r_Clock_count+1;
                        r_SM_Main <= s_rx_start_bit;
                    end
                  end
            end

          //  Once we are in the state of reading the data
          //  we check if the clock count has exceded/met the clocks per bit
          //  If it has not increment the clock count by one and keep the state of the machine 
          // reading bits.  otherwise, reset the clock count since it has met the max, retreive the
          // the bit of the byte at the index defined by r_bit_index.  
          // Then if the index is less than 7 (1 byte = 8 bits and registers index from 0)
          // increment the bit_index and keep the state of the machine at reading bits.  otherwise, if the 
          // bit index is equal to 7, reset the index and change the state of the machine to the stop bit state
          s_rx_data_bits:
            begin
                if (r_Clock_count <CLCKS_PER_BIT-1)
                    begin 
                        r_Clock_count <= r_Clock_count + 1;
                        r_SM_Main <= s_rx_data_bits;
                    end
                else
                    begin
                        r_Clock_count <= 0;
                        r_rx_Byte[r_bit_index] <= r_rx_data;
                        if (r_bit_index < 7)
                            begin
                                r_bit_index <= r_bit_index +1;
                                r_SM_Main <= s_rx_data_bits;
                            end
                        else
                            begin 
                            r_bit_index <= 0;
                            r_SM_Main <= s_rx_stop_bit;
                            end
                    end 
            end
          s_rx_stop_bit:
            begin
                if (r_Clock_count < CLCKS_PER_BIT-1)
                    begin
                        r_Clock_count <= r_Clock_count+1;
                        r_SM_Main <= s_rx_stop_bit;
                    end
                else
                    begin   
                        r_rx_DV <= 1'b1;
                        r_Clock_count <= 0;
                        r_SM_Main <= s_cleanup;
                    end
            end
          s_cleanup:
            begin
                r_SM_Main <= s_idle
                r_rx_DV <= 1'b0;
            end
          
          default:
            r_SM_Main <= s_idle;
        endcase
   end
assign o_rx_DV = r_rx_DV;
assign o_rx_Byte = r_rx_Byte;
endmodule