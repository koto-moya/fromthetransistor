module uart #(
    parameter DATA_WIDTH = 8
)
(
    input clk_i,
    input start_i,
    input [DATA_WIDTH-1:0] data_i,
    output reg tx_o 
);
    reg[DATA_WIDTH+1:0] shift;
    reg[3:0] bit_count; // track the number of bits transmitted

    always @(posedge clk_i)begin
    if (start_i = 1)begin
        shift <= {1'b1, data_i, 1'b0};
        bit_count <= 0;
        end 
    else if (bit_count < 10)begin
        tx_o <= reg[0]
        shift <= shift >> 1;
        bit_count <= bit_count+1
        end
    end
endmodule
