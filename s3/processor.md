Here's the updated three-week plan with the addition of coding a bootrom:

### Week 1: CPU Core Design and Pipeline Basics
1. **Introduction to ARM7 Architecture**
   - Overview of ARM7 CPU features
   - Basic pipeline concepts: fetch, decode, execute

2. **Verilog Basics and Project Setup**
   - Verilog coding guidelines
   - Project structure and initial setup
   - Creating a simple pipeline skeleton in Verilog

3. **Instruction Fetch Stage**
   - Implementing the instruction fetch unit
   - Handling program counter (PC) updates
   - Fetching instructions from memory

4. **Instruction Decode Stage**
   - Decoding ARM7 instructions
   - Register file design and implementation
   - Handling immediate values and operand fetching

5. **Assembler Development (Python)**
   - Introduction to ARM assembly language
   - Writing a simple assembler in Python
   - Assembler outputs basic binary files for the CPU

### Week 2: Execute Stage, Memory Integration, Bootrom, and Assembler Enhancement
6. **Execute Stage: ALU Design**
   - Designing the Arithmetic Logic Unit (ALU)
   - Integrating ALU operations with the pipeline
   - Handling flags and condition codes

7. **Memory Access: SRAM vs. BRAM**
   - Memory types and considerations: BRAM vs. SRAM
   - Estimating memory requirements (1MB minimum)
   - Implementing memory access in Verilog

8. **Pipeline Control and Hazard Handling**
   - Pipeline control logic
   - Data hazards and forwarding
   - Stall and flush mechanisms

9. **Synthesizable and Simulatable Design**
   - Ensuring Verilog code is synthesizable
   - Setting up simulations: testbenches and waveform analysis
   - Basic synthesis for FPGA targets

10. **Assembler Enhancement (Python)**
    - Extending the assembler to support more ARM instructions
    - Testing the assembler with the developing CPU pipeline

11. **Bootrom Coding (Assembler)**
    - Writing a bootrom in ARM assembly
    - Implementing serial code download into RAM
    - Integrating the bootrom into the FPGA image
    - Running simple test programs on the CPU via the bootrom

### Week 3: System Integration, Final Testing, and Assembler-CPU Integration
12. **Integrating the Pipeline Stages**
    - Connecting fetch, decode, and execute stages
    - Pipeline synchronization and timing issues

13. **Implementing Branch Prediction (Optional)**
    - Basics of branch prediction in ARM7
    - Simple branch prediction logic

14. **Memory Interface Design**
    - Designing and interfacing with SRAM
    - Handling memory-mapped I/O and peripherals

15. **Final Testing and Optimization**
    - Comprehensive testbench development
    - Synthesizing the full ARM7 CPU
    - Optimizing for performance and resource usage

16. **Linker and Assembler Finalization (Python)**
    - Modifying the assembler to include linker functionality
    - Finalizing the assembler to produce fully linked binaries
    - Testing the final assembler and integrating it with the CPU design

17. **Wrap-Up and Future Work**
    - Review of the ARM7 CPU design, assembler, and bootrom
    - Discuss potential enhancements (e.g., adding cache, pipeline depth)
    - Introduction to more advanced CPU features (e.g., DDR memory, advanced branch prediction)
