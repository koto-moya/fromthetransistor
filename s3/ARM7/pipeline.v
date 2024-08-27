module ARM7 (
    input clock,
    input reset,
    input [31:0] instruct_bus,
    input [31:0] data_in_bus,
    output status,
    output reg [31:0] data_out_bus
);

// register file.  can access the registers like stack[i] -> reg_i
reg [31:0] stack [15:0];

reg [31:0] func_out; // No idea how to use this yet

// current state
reg [7:0] state = 3'b000;

// processsor states
parameter idle = 3'b000;
parameter fetch = 3'b001;
parameter decode = 3'b010;
parameter execute = 3'b100;


// module instantiation
ALU ARITHMETIC_LOGIC_UNIT (
    .clock (clock),
);

CU CONTROL_UNIT (
    .clock (clock),
);

MEM MEM_INRTERFACE (
    .clock (clock)
);


// runtime
always (@posedge clock) begin
    
end
endmodule

// implement the control unit.  Should control the fetch, decode, execute 
module CONTROL_UNIT (
    input clock,
);
endmodule

// Executes arithmetic and logic ops
module ARITHMETIC_LOGIC_UNIT (
    input clock,
);  
endmodule

// Interface with the BRAM. Maybe SRAM in the future
module MEM_INRTERFACE (
    input clock,
);
endmodule