module UART (
    input rx,
    input clk,
    output reg [7:0] data_bus,
    output reg [7:0] probe
);

reg [7:0] the_byte = 8'b00000000; 
reg [2:0] byte_index = 3'b000;

reg [7:0] clock_count = 8'b00000000;


// imutable variables (possible states)
parameter idle = 3'b000; // listening
parameter start_bit = 3'b001; // start bit
parameter reading_bits = 3'b010; // reading byte
parameter stop_bit = 3'b100; // stop bit

// for the baud rate
parameter clks_per_bit = 80;
reg [2:0] reciever_state = 3'b000;

always @(posedge clk) begin
    case (reciever_state)
    idle:
        begin
            clock_count <= 0;
            byte_index <= 0;
            if (rx == 1'b0) begin
                probe <= 1;
                reciever_state <= start_bit;
            end
            else
                reciever_state <= idle;
        end
    start_bit:
        begin
            probe <= 0;
            if (clock_count == (clks_per_bit-1)/2) begin
                if (rx == 1'b0) begin// active low uar
                    clock_count <= 0;
                    reciever_state <= reading_bits;
                end
                else begin
                    clock_count <= 0;
                    reciever_state <= idle;
                end
            end
            else begin 
                clock_count <= clock_count + 1;
                reciever_state <= start_bit;
            end
        end
    reading_bits:
        begin
            if (clock_count <  clks_per_bit-1) begin
                clock_count <= clock_count + 1;
                reciever_state <= reading_bits; 
            end
            else begin
                clock_count <= 0; // why do you reset the clock count here?    
                the_byte[byte_index] <= rx;
                if (byte_index < 7) begin
                    byte_index <= byte_index + 1;
                    reciever_state <= reading_bits;
                end
                else begin
                    byte_index <= 3'b000;
                    reciever_state <= stop_bit;
                end
            end
        end
    stop_bit:
        if (clock_count < clks_per_bit-1)
            begin
                clock_count <= clock_count +1;
                reciever_state <= stop_bit;
            end
        else begin
            clock_count <= 0;
            reciever_state <= idle;
        end
    default:
        reciever_state <= idle;
    endcase
end
//assign data_bus = the_byte;
endmodule