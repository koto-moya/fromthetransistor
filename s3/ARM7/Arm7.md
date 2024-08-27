# Notes on Arm7 

**Section Outline**
- Coding an assembler(Python, 500) -- Straightforward and boring, write in python. Happens in parallel with the CPU building. Teaches you ARM assembly. Initially outputs just binary files, but changed when you write a linker.
- Building a ARM7 CPU(Verilog, 1500) -- Break this into subchapters. A simple pipeline to start, decode, fetch, execute. How much BRAM do we have? We need at least 1MB, DDR would be hard I think, maybe an SRAM. Simulatable and synthesizable.
- Coding a bootrom(Assembler, 40) -- This allows code download into RAM over the serial port, and is baked into the FPGA image. Cute test programs run on this.

## Resources:
- https://faculty-web.msoe.edu/meier/ce1921/slidesets/isaarm-instructions.pdf

## General
Armv4 is load and store, risc (reduced instruction set)

32 bit processor
||  ||   machine code
||  ||   ALU -> data 
||  ||   mem address
||  ||   registers R0-R15, CSPR

3-operand instruction format? R[Rd] <- R[Rn] op R[Rm] I think Rd is destination register, Rn and Rm are source?

Three constant types: 8, 12 and 24 bit (inst. enhancements). in instruction binary, not sure if we can use these

cannot use arithmetic instructions directly on memory. This is because the data needs to be moved into the CPU registers.  Load ops precede ALU ops.

17 CPU registers 
Holds the data from the memory and its results

R0 -> R12 are general purpose available for use
R13, R14, R15, and CSPR are special use for program sequencing do not mess with these if you want your program to work

The registers are a stack:

function return value?      R0
                            :
                            .
                            R3 Function params 0-3: values passed from caller to function
                            R4
                            :
                            .
                            R11 saved variables: preserved across procedure calls (cpu won't mess with these)
                            R12 Temp variable: Not important to main program, does not need to be preserved by the CPU (non-preserved registers)
                            R13 stack pointer: 
                            R14 Link register
                            R15 Program counter
                            CPSR Current Program Status Register

useful for compilers to know ^

Is the function return value 32 bit as well?

Three basic instruction categories: Branches, Load-store, Data Processing

Data Processing -> arithmetic logic
    - Three levels of abstraction for instructions (all in register mode):
        - register-transfer equation: `Rd <- Rn op Rm`
            - should be read like: place the result of Rn op Rm in Rd where Rd is the destination register, Rm and Rn are the source registers and the op can things like + - AND, etc. 
        - instruction description: `ADD Rd, Rn, Rm`
            - Should be read the same as the above
        - Actual machine instruction: `ADD R0, R1, R2`
            - This is the instruction that is actually compiled by the compiler
    - The other two modes are immediate mode and register-shifted-by-register mode:
        - Immediate mode: uses constants `Rd <- Rn op constant` -> `ADD Rd, Rn, imm` -> `ADD R0, R1, #95`
        - shift mode uses register shifted by another register `Rd <- Rn op (Rm shifted-by Rs)` -> `ADD Rd, Rn, Rm, shift-type Rs` -> `ADD R0, R1, R2, LSL R3`

Branches -> conditional and unconditional jumps


Memory instructions:
    - [] means memory
    - Load
        - LDR -> Load register
        - LDR calcs a data memory address using the ALU
        - Register mode
            - `Rd <- MEM[Rn]` -> `LDR Rd, [Rn]` -> `LDR R0, [R4]`
        - Shift mode (does not support register-shifted-registers)
            - `Rd <- MEM[Rn + (shifted Rm)]` -> `LDR Rd, [Rn, Rm, shift amount]` -> `LDR R0, [R4,R5]` or `LDR R0, [R4, R5, LSL #17]`
        - immediate mode
            - `Rd <- MEM[Rn+imm]` -> `LDR Rd, [Rn, imm]`  -> `LDR R0, [R4, #8]`
    - Store
        - STR -> Store-register
        - In the sotre case dat moves from the destination register to the mem address
        - STR calcs a data mem address using the ALU
        - Register mode
            - `MEM[Rn] <- Rd` -> `STR Rd, [Rn]` -> `STR R0, [R4]`
        - shift mode (does not support register-shifted-registers)
            - `MEM[Rn + (shifted Rm)] <- Rd` -> `STR Rd, [Rn, Rm, shift amount]` -> `STR R0, [R4, R5]` or `STR R0, [R4, R5, LSL #17]`
        - immediate mode
            - `MEM[Rn + imm]` -> `STR Rd, [Rn, imm]` -> `STR R0, [R4, #8]` 
    - ARM chips also support moving 8-bit values
        - `LDRB` and `STRB` data flows in and out of the lower byte of a register
    - ARM chips also support moving 16 bit values
        - Load halfword instructions
            - `LDRH` and `STRH`

## Conditional execution
ISA's use arithmetic conditional flags to offer conditional execution -> produced by the ALU

ARM approach to conditionals: *almost* all instructions can take on a conditional form. This gives the user a lot of control on how the CPU executes instructions

Useful notation:  x_bar logical NOT, ⊕ = XOR (1 if args are different, 0 if they are the same)

**Logical conditionals**
Suffix      ALU conditon                                                Conditon
EQ          A == B                                                      Z
NE          A != B                                                      Z_bar
CS          carry out set to 1                                          C
HS          unsigned comparison of A and B                              C
CC          carry out set to 0                                          C_bar
LO          unsigned A is less than B                                   C_bar
MI          negative result                                             N
PL          positive or zero result                                     N_bar
VS          overflow, overflow bit set to 1                             V
VC          no overflow, overflow bit set to 0                          V_bar

**Mathematical conditions**
HI          unsigned A higher than B                                    Z_bar C     (00, 10, 01, 11)
LS          unsigned A less than or equal to B                          Z OR C_bar
GE          signed A greater than or equal to B                         (N ⊕ V)_bar
LT          signed A less than B                                        (N ⊕ V)
GT          signed A greater than B                                     Z_bar (N ⊕ V)_bar
LE          signed A less than or equal to B                            Z OR (N ⊕ V)
AL          Always execute/ no condition (ignored and not needed)       ignored

you can suffix instructions with AL but it's only for clarity and is not necessary (it's implied)

**Branch conditions**
BEQ          A was equal to B                                            Z
BNE          A was not equal to B                                        Z_bar
BCS          carry out was set to 1                                      C
BHS          unsigned A was higher or equal to B                         C
BCC          carry out set to 0                                          C_bar
BLO          unsigned A lower than B                                     C_bar
BMI          result was negative                                         N
BPL          result was positive or zero                                 N_bar
BVS          result overflowed, overflow bit set to 1                    V
BVC          result not overflowed, overflow bit set to 0                V_bar

use branch conditions to jump to a new location in the instruction set when satisfied. 

**Mathematical Branch Conditionals**
BHI          unsigned A higher than B                                    Z_bar C
BLS          unsigned A lower or same as B                               Z OR C_bar
BGE          signed A greater than or equal to B                         (N ⊕ V)_bar
BLT          signed A les than B                                         (N ⊕ V)
BGT          signed A greater than B                                     Z_bar (N ⊕ V)_bar
BLE          signed A was less than or equal to B                        Z or (N ⊕ V)
BAL          always execute the instruction (no condition)               ignored

## registers

Can look at 32 bit registers like: 0000 0000 0000 0000 0000 0000 0000 0000
                                                                |LowerByte|
                                                      |     half word     | 
                                   |                word                  | 


## Pipeline

Flow of the pipeline goes fetch -> Decode -> Execute. Something is killing me in Hotz's course outline.  He outlines the pipeline as decode, fetch, and execute.  Was this a typo, a mistake, or does he actually mean decode first? More inquiry is needed here.  I'll keep going down the standard path and come back to this once I know more.  

Each of these steps takes one clock cycle

### Fetch

Retrieve the instructions from memory.  Think about compiled programs.

The program counter holds the information for retrieving the program data from memory

increment the program counter to point to the next instruction

### Decode

decode the instruction in the instruction register

Identify the op, source registers, and the destination register

read the operands (values) from the registers identified


### Execute

perform the op and store the result (either in a register or in memory)

The ALU actually performs the op

### Flow

1st cycle: fetch the first instruction
2nd cycle: decode the second instruction while fetching the second
3rd cycle: execute the first instruction decode the second, fetch the third

Generalized:

Nth cycle (where N >= 3): execute Instruction_(N-2), decode Instruction_(N-1), fetch Instruction_(N)



