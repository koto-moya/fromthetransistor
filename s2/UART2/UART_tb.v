`timescale 1ns / 1ns;
module UART_tb;

reg  rx;
reg clk;
wire [7:0] data_bus;


UART    u0 (
        .rx (rx),
        .clk (clk),
        .data_bus (data_bus)
);

initial begin
    $dumpfile("uart_dump.vcd");
    $dumpvars(0, UART_tb);
    // sim the transmission

    clk <= 0;
    rx <= 1; // idle
    #80 rx <= 0; // start bit
    #80 rx <= 0;
    #80 rx <= 1;
    #80 rx <= 0;
    #80 rx <= 1;
    #80 rx <= 0;
    #80 rx <= 1;
    #80 rx <= 0;
    #80 rx <= 1;
    #80 rx <= 1;

    #100;
    $display("Final data_bus value: %b", data_bus);
    $finish;
end

always #1 clk = ~clk;

endmodule