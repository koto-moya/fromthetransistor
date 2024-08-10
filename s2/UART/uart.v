module uart #()
(
    input clk_i,
    input start_i,
    input [31:0] data_i,
    output reg tx_o, 
    output reg [31:0] temp
);
    reg[33:0] shift;
    reg[3:0] bit_count; // track the number of bits transmitted
    always @(posedge clk_i)begin
    if (start_i == 1)begin
        shift <= {1'b1, data_i, 1'b0};
        temp <= {data_i};
        bit_count <= 0;
        end 
    else if (bit_count < 10)begin
        tx_o <= shift[0];
        shift <= shift >> 1;
        bit_count <= bit_count+1;
        end
    end
endmodule
