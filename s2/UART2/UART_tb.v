`timescale 10ns / 10ns;
module UART_tb;

reg  rx;
reg clk;
wire [7:0] probe;
wire [7:0] data_bus;


UART    u0 (
        .rx (rx),
        .clk (clk),
        .data_bus (data_bus),
        .probe (probe)
);

initial begin
    $dumpfile("uart_dump.vcd");
    $dumpvars(0, UART_tb);
    // sim the transmission

    clk <= 0; // init the clock
    rx <= 1; // idle
    #80 rx <= 0; // start bit
    $display("probe: %b", probe);
    #80 rx <= 0; // 0th bit
    #80 rx <= 1; // 1st bit
    #80 rx <= 0; // 2nd bit
    #80 rx <= 1; // 3rd bit
    #80 rx <= 0; // 4th bit
    #80 rx <= 1; // 5th bit
    #80 rx <= 0; // 6th bit
    #80 rx <= 1; // 7th bit
    #80 rx <= 1; // stop bit 
    #100;
    $display("Final data_bus value: %b", data_bus);
    $finish;
end

always #1 clk = ~clk;

endmodule