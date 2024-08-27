# Notes on the Arm7 arch.

Armv4 is load and store, risc (reduced instruction set)

32 bit processor
||  ||   machine code
||  ||   ALU -> data 
||  ||   mem address
||  ||   registers R0-R15, CSPR

3-operand instruction format? R[Rd] <- R[Rn] op R[Rm] I think Rd is destination register, Rn and Rm are source?

Three constant types: 8, 12 and 24 bit (inst. enhancements). in instruction binary, not sure if we can use these




cannot use arithmetic instructions directly on memory. This is because the data needs to be moved into the CPU registers.  Load ops precede ALU ops

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
    - Three levels of abstraction for instructions:
        - register-transfer equation: ~Rd <- Rn op Rm~
            - should be read like: place the result of Rn op Rm in Rd where Rd is the destination register, Rm and Rn are the source registers and the op can things like + - AND, etc. 
        - instruction description:
Branches -> conditional and unconditional jumps




# Machine code 

Binary executables

CPU instructions: load, store, jumps, ALU op  -> compiler -> binary








Machine code 
   6      5     5     5     5      6 bits
[  op  |  rs |  rt |  rd |shamt| funct]  R-type
[  op  |  rs |  rt | address/immediate]  I-type
[  op  |        target address        ]  J-type


