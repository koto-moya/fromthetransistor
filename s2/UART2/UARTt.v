module UARTtransmitter (
    input [7:0] In_byte,
    input  data_bus_activate,
    input clk,
    output reg tx
);

reg [3:0] byte_index = 4'b0000;
reg [7:0] clock_count = 8'b00000000;
reg [9:0] uart_packet = 10'b0000000000;
reg data_bus_act = 1'b1;

// imutable variables (possible states)
parameter idle = 3'b000; // listening
parameter building_stream = 3'b001; // data bus has sent data
parameter sending_stream = 3'b010; // sending the bit stream

// for the baud rate
parameter clks_per_bit = 40;
reg [2:0] transmitter_state = 3'b000;

always @(posedge clk) begin
    case (transmitter_state)
    idle: // 000
        begin
            clock_count <= 0;
            byte_index <= 0;
            data_bus_act <= data_bus_activate;
            if (data_bus_act == 1'b0) begin // active low transmitter
                transmitter_state <= building_stream;
            end
            else
                transmitter_state <= idle;
        end
    building_stream: // 001
        begin
            if (clock_count < clks_per_bit-1) begin
                clock_count <= clock_count + 1;
                transmitter_state <= building_stream;
            end
            else begin
                clock_count <= 0;
                if (byte_index == 0) begin
                    uart_packet[byte_index] = 1'b0; //start bit
                    byte_index <= byte_index + 1;
                    transmitter_state <= building_stream;
                end
                else if (byte_index == 9) begin
                    uart_packet[byte_index] = 1'b1; //stop bit
                    byte_index <= 0;
                    transmitter_state <= sending_stream;
                end
                else begin
                    uart_packet[byte_index] = In_byte[byte_index-1];
                    byte_index <= byte_index + 1;
                    transmitter_state <= building_stream;
                end
            end
        end
    sending_stream:  // 010
        begin
            if (clock_count <  clks_per_bit-1) begin
                clock_count <= clock_count + 1;
                transmitter_state <= sending_stream; 
            end
            else begin
                clock_count <= 0;    
                tx <= uart_packet[byte_index]; 
                if (byte_index < 9) begin
                    byte_index <= byte_index + 1;
                    transmitter_state <= sending_stream;
                end
                else begin
                    byte_index <= 3'b000;
                    data_bus_act <= 1'b1;
                    transmitter_state <= idle;
                end
            end
        end
    default:
        transmitter_state <= idle;
    endcase
end
endmodule