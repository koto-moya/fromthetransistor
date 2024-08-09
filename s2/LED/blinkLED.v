module blinkLED #(
    parameter DATA_WIDTH = 1
) 
(
    input clk_i,
    //input[DATA_WIDTH-1:0] pulse
    output[DATA_WIDTH-1:0] LED
);
    reg[DATA_WIDTH-1:0] data;
    assign LED = data;
    always @(posedge clk_i, negedge clk_i) begin
        data <= clk_i;
    end
endmodule