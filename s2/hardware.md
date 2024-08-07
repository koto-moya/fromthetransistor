# Section 2: Bringup: What language is hardware coded in? -- 0.5 weeks                                                                                                            
- Blinking an LED(Verilog, 10) -- Your first little program! Getting the simulator working. Learning Verilog.
- Building a UART(Verilog, 100) -- An intro chapter to Verilog, copy a real UART, introducing the concept of MMIO, though the serial port may be semihosting. Serial test echo progra
m and led control.

## Lesson 2.1: How does Verilog work?


The hello world example was simple enough.  It looks like the fundamental object of the languiage is called the module.  Gathering all of the tools for verilog will prove to be the bulk of the annoying work.  

The main things I have to worry about when desining hardware in Verilog is the *.v file, *.cc file, the CMake text file, the build directory, using `cmake -GNinja ..` in the build directory, then use `ninja` to complete the build, then run the binary of the test bench `./binary`.  Then we can use gtkwave to view the results.  


## Lesson 2.1.1: Verilog as a HDL

Refer to hello.v for the verilog code I will be discussing in this lesson.  A module in Verilog manages the state of your system along with all of the parameters and values inside of it.  To declare a module the syntax looks like `module exampleModule #()`.  Inside of the first set of parens, the parameter declaration, you can decalre any parameters that will be used in the module.  Parameters are initialized variables that can be used in the modules scope.  Then we need to define the inputs and outputs of the system and assign them to variable names.  We also need to define the size of the memory each should take.   There are some built in commands to the languange like `posedge`, `negedge`, `reg`, `assign`, etc. that all have specific funtions.

The above is me fumbling around how Verilog works and I now have a much better explanation.  A Verilog module has a module declaration and within that declaration there are two other declarations: the parameter declration and the port declartaion.  The parameter declaration is for variables to be used within the scope of the module (port declration included).  The port declaration is used for declaring the various inputs and outputs of your system.  Along with the module declaration, a module has an internal logic section.  This is where things actually happen.  In this section you will make internal signal declarations, continous assignements, and execute procedural blocks.  Internal signal declarations decalre internal registers to store data that persits over clock cycles.  Continous assignments are for assigning ports to registers so a given port will always reflect the current value of the register it was assigned to.  Finally, the procedural blocks describe the behavior we expect the system to display.  

## Lesson 2.1.2: Blinking an LED
