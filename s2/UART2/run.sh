#!/bin/bash
iverilog -o uart.vvp UARTt.v UARTr.v UART_tb.v
vvp uart.vvp
gtkwave uart_dump.vcd
