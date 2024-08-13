#!/bin/bash
iverilog -o dlatch.vvp dlatch.v dlatch_tb.v
vvp dlatch.vvp
gtkwave dump.vcd
