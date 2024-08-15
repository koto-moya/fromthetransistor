module UART (
    input rx,
    input clk,
    output reg [7:0] data_bus
);

reg [7:0] the_byte = 8'b00000000; 
reg [2:0] byte_index = 3'b000;
reg [2:0] reciever_state = 3'b000;

// imutable variables (possible states)
parameter idle = 3'b000; // listening
parameter start_bit = 3'b001; // reading
parameter reading_bits = 3'b010;
parameter stop_bit = 3'b100;


// Okay now I have the basic functionality of the UART
// Now comes the hard part.  I nee to implement the baud rate.
// basically I should be reading the bits in the middle of their
// signal.  


always @(posedge clk) begin
    case (reciever_state)
    idle:
    begin
        if (rx == 1'b1)
            reciever_state <= idle;
        else
            reciever_state <= start_bit;
    end
    start_bit:
    begin
        if (rx == 1'b0) // active low uart
            reciever_state <= reading_bits;
        else
            reciever_state <= idle;
    end
    reading_bits:
    begin
        if (byte_index < 7) begin
            the_byte[byte_index] <= rx;
            byte_index <= byte_index + 1;
            reciever_state <= reading_bits;
        end
        else begin
            byte_index <= 3'b000;
            reciever_state <= stop_bit;
        end
    end
    stop_bit:
    begin 
        data_bus <= the_byte;
        reciever_state <= idle;
    end
    endcase
end
endmodule