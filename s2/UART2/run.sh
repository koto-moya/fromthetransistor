#!/bin/bash
iverilog -o uart.vvp UART.v UART_tb.v
vvp uart.vvp
gtkwave uart_dump.vcd
