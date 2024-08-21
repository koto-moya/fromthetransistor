`timescale 10ns / 10ns;
module UART_tb;


// Global values
reg clk;

// receiver intialised values
reg  rx;
wire [7:0] data_bus;

// transmitter initialised values
reg [7:0] In_byte;
reg data_bus_activate;
wire tx;

// for the for loop
integer i;

UARTreceiver    receiver (
        .rx (rx),
        .clk (clk),
        .data_bus (data_bus)
);

UARTtransmitter    transmitter (
        .In_byte (In_byte),
        .data_bus_activate (data_bus_activate),
        .clk (clk),
        .tx (tx)
);


initial begin
    $dumpfile("uart_dump.vcd");
    $dumpvars(0, UART_tb);
    // sim the transmission

    clk <= 0; // init the clock
    rx <= 1; // idle receiver // idle transmitter
    data_bus_activate <= 1'b1;
    #80 In_byte <= 8'b01100110; // preparing the message. The test bench is acting as the data bus now
    #80 data_bus_activate <= 1'b0;
    

    for (i = 0; i < 10; i = i+1) begin
       #220 rx <= tx;
    end
    $display("Final data_bus value: %b", data_bus);
    $finish;
end

always #1 clk = ~clk;

endmodule



    // #80 rx <= 0; // start bit
    // #80 rx <= 0; // 0th bit LSB
    // #80 rx <= 1; // 1st bit
    // #80 rx <= 0; // 2nd bit
    // #80 rx <= 1; // 3rd bit
    // #80 rx <= 0; // 4th bit
    // #80 rx <= 1; // 5th bit
    // #80 rx <= 0; // 6th bit
    // #80 rx <= 1; // 7th bit MSB
    // #80 rx <= 1; // stop bit 