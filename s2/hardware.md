# Section 2: Bringup: What language is hardware coded in? -- 0.5 weeks                                                                                                            
- Blinking an LED(Verilog, 10) -- Your first little program! Getting the simulator working. Learning Verilog.
- Building a UART(Verilog, 100) -- An intro chapter to Verilog, copy a real UART, introducing the concept of MMIO, though the serial port may be semihosting. Serial test echo progra
m and led control.

## Lesson 2.1: How does Verilog work?


The hello world example was simple enough.  It looks like the fundamental object of the language is called the module.  Gathering all of the tools for Verilog will prove to be the bulk of the annoying work.  

The main things I have to worry about when desinging hardware in Verilog is the *.v file, *.cc file, the CMake text file, the build directory, using `cmake -GNinja ..` in the build directory, then use `ninja` to complete the build, then run the binary of the test bench `./binary`.  Then we can use gtkwave to view the results.  


## Lesson 2.1.1: Verilog as a HDL

Refer to hello.v for the Verilog code I will be discussing in this lesson.  A module in Verilog manages the state of your system along with all of the parameters and values inside of it.  To declare a module the syntax looks like `module exampleModule #()`.  Inside of the first set of parens, the parameter declaration, you can declare any parameters that will be used in the module.  Parameters are initialized variables that can be used in the modules scope.  Then we need to define the inputs and outputs of the system and assign them to variable names.  We also need to define the size of the memory each should take.   There are some built in commands to the language like `posedge`, `negedge`, `reg`, `assign`, etc. that all have specific functions.

The above is me fumbling around how Verilog works and I now have a much better explanation.  A Verilog module has a module declaration and within that declaration there are two other declarations: the parameter declaration and the port declaration.  The parameter declaration is for variables to be used within the scope of the module (port declaration included).  The port declaration is used for declaring the various inputs and outputs of your system.  Along with the module declaration, a module has an internal logic section.  This is where things actually happen.  In this section you will make internal signal declarations, continuous assignments, and execute procedural blocks.  Internal signal declarations declare internal registers to store data that persists over clock cycles.  Continuous assignments are for assigning ports to registers so a given port will always reflect the current value of the register it was assigned to.  Finally, the procedural blocks describe the behavior we expect the system to display.  

## Lesson 2.1.2: Blinking an LED

Finally got an LED to blink.  I did this in the simplest way possible by setting a register equal to the clock value and assigned that register to the LED port.  In the C++ test bench I cycled the clock by 1 ns 3 times.  Viewing this on gtkwave shows that the LED is indeed blinking every 1/2 ns.  Not gonna go further than this here since I think the UART is gonna be a big lift.  


## Lesson 2.2: UART

UART, or universal asynchronous receiver-transmitter, is a widely used communication protocol.  This protocol uses a bitstream to pass data from a transceiver device to a receiver device (devices can be both roles in the case of back and forth coms).  Bits are sent as a stream synced to the transmitting devices clock.  The transmitter and the receiver do not share a clock therefor it's important to have the same baud rate (number of symbols/signal changes transmitted per second).  This basically means you have to sync the clocks of the devices that are communicating to each other.  

The bit stream is usually called a UART packet, or just a packet for simplicity.  The packet looks like this:

                                     UART Packet
         _______________________________________________________________________
        |  Start Bit  |           Data Frame         | Parity Bits  | Stop Bits |
        |   (1 bit)   |         (5-9 data bits)      |  (0-1 bit)   | (1-2 bits)|
        |_____________|______________________________|______________|___________|

### Lesson 2.2.1 Start bit
The start bit is a trigger for the receiver to start reading the bit stream at the set baud rate.  Usually transmission lines are set to a high voltage; when a transmission line is pulled from high to low the receiver detects this change as the start bit and begins reading the data frame.

### Lesson 2.2.2 Data Frame

This is where the data is stored in the bit stream.  It can be anywhere from 5 bits to 8 bits if a parity bit is being used.  If a parity bit is not used, we can fit 9 bits in the data frame.  The standard is to send the least significant bit first.  

### Lesson 2.2.3 Parity

Parity is used to check the integrity of the data being sent.  When the receiving device has read the data frame it will count up all of the 1's and check if there are an even or odd amount of them.  A high parity bit corresponds to an odd number and a low parity corresponds to an even amount.  For our purposes this can be ignored for now.  

### Lesson 2.2.4 Stop Bits

Drives the transmission voltage from a low voltage to a high voltage for 1 or 2 bits which tells the receiver device to stop reading.  


