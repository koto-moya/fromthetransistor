# Section 1: Intro: Cheating our way past the transistor -- 0.5 weeks
- So about those transistors -- Course overview. Describe how FPGAs are buildable using transistors, and that ICs are just collections of transistors in a nice reliable package. Understand the LUTs and stuff. Talk briefly about the theory of transistors, but all projects must build on each other so we can’t build one.
- Emulation -- Building on real hardware limits the reach of this course. Using something like Verilator will allow anyone with a computer to play.


Resources: 

- Implementing concepts in verilog: https://www.youtube.com/watch?v=lLg1AgA2Xoo&list=PLEBQazB0HUyT1WmMONxRZn9NmQ_9CIKhb
- FPGA Architecture White Paper Altera Corp: https://www.altera.com/content/dam/altera-www/global/en_US/pdfs/literature/wp/wp-01003.pdf
- LUT Info: https://www.allaboutcircuits.com/textbook/digital/chpt-16/look-up-tables/

## Lesson 1.1: Top Down: What's a FPGA?

Put simply, a FPGA is a re-programmable integrated circuit.  Field-Programmable Gate Array fully spelled out.  As the name suggests it's architecture resembles an array which is populated by logic blocks. This group of blocks is usually called Configurable Logic Blocks or Lab Array Blocks.  I think back in the day these logic blocks were very simple to reason about and contained only a handful of transistors.  Nowadays, each logic unit can support its own processes thanks to Moore's law. Field-programmable comes from the ability to overwrite the function of the device in the field so long as the new logic can fit on the array.  Much chip development can be tested on FPGAs due the speed of development. Space constraints ignored, the FPGA can implement any function an ASIC can.  

### Lesson 1.1.1: Logic Blocks

The fundamental unit of any FPGA.  Usually consists of a group of logic cells.  Each cell will contain a 4 input LUT (Lookup Table), a FA (Full Adder), and a D-type flip-flop.  As far as I understand it now (which is not very far at this point lol) 4 input LUT should be able to receive a 4 bit binary number and return a specific value for each configuration of the number.  A FA adds binary numbers?? not sure but this sounds right. A logic cell can have two modes *normal* and *arithmetic*.  In normal mode the output of the LUT gets sent to the first mux (multiplexer).  In arithmetic mode the LUT output is sent to the FA.  The modes are controlled by the second mux.


### Lesson 1.1.2: State of the Art

FPGAs have come a long way from arrays of logic cells.  Now they contain built in architecture such as Digital Signal Processors, multipliers, embedded processors, etc. FPGAs now ride the line of flexibility and specialized function.  More expensive FPGAs have many more features like hard IP cores, PCI controllers, etc. Most of these specialized components cannot be built from LUTs and instead are built from transistors.    

## Lesson 1.2: Bottom Up: What's a Transistor?

Transistors can function as an amplifier or a switch depending on how it is used. Fundamentally, transistors rely on a specific semiconductor technology called PN junctions.  Doping semiconductor materials with different elements can produce new conductivity behaviors in the base material.

### Lesson 1.2.1: PN Junctions

N-type materials are semiconductors doped with acceptor impurities, elements that have 1 vacancy in their valance shell.  P-type materials are semiconductors doped with donor impurities.  Combining P and N-type materials results in a depletion zone between the two material types (illustrated below)

                                                       Junction
                                         _________________|_________________
                                        | P +  +  +  +  - | +  -  -  -  - N |
                                        |   +  +  +  +  - | +  -  -  -  -   |
                                        |   +  +  +  +  - | +  -  -  -  -   |
                                        |   +  +  +  +  - | +  -  -  -  -   | 
                                         -----------------------------------
                                                       |- v -|
                                                  Depletion Region

The combination of these materials can be achieved a few different ways but is generally done by growing a semiconductor crystal doped with N-type atoms.  Then, using heat and pressure, one can melt a pellet of P-type material onto the surface of the N-type wafer.  This diffuses the P-type atoms into the surface layer of the wafer.  The process that leads to the presence of the depletion region happens nearly instantaneously and the electrons/positive vacancies away from the junction go undisturbed.  The orientation of the charges in the depletion region gives rise to a electrostatic field which can be interpreted as a voltage barrier between the P and N type materials. Applying a forward bias to the PN junction results in a reduced barrier potential across the depletion region (illustrated below).

                                            Forward Biased PN Junction
                                                     Junction
                                         ________________|________________
                                        | P +  +  +  +  -|+  -  -  -  - N |
                                        |   +  +  +  +  -|+  -  -  -  -   |
                                  ------|   +  +  +  +  -|+  -  -  -  -   |-------
                                  |     |   +  +  +  +  -|+  -  -  -  -   |      |
                                  |     -----------------------------------      |
                                  |                    |v_fb|                    |    Where v_fb < v
                                  |               Depletion Region               |
                                  |                                              |
                                  |               + |   |  -                     |
                                  ------------------| | | |-----------------------
                                                    |   |

You can think about this intuitively if you think about the positive terminal of the battery "pushing" the holes through the system clockwise whereas the negative terminal is "sending" electrons through the material counter-clockwise, thus "squeezing" the potential barrier.  This means that by applying this external voltage in this particular direction aids the flow of current through the junction. 

A Reverse biased Junction looks something like this:


                                            Reverse Biased PN Junction
                                                     Junction
                                         ________________|________________
                                        | P +  +  +  - - | + +  -  -  - N |
                                        |   +  +  +  - - | + +  -  -  -   |
                                  ------|   +  +  +  - - | + +  -  -  -   |-------
                                  |     |   +  +  +  - - | + +  -  -  -   |      |
                                  |     -----------------------------------      |
                                  |                  |--v_rb--|                  |    Where v_rb > v
                                  |               Depletion Region               |
                                  |                                              |
                                  |               -   |   | +                    |
                                  ------------------| | | |-----------------------
                                                      |   
This does the opposite for a forward biased junction and thus increases the potential barrier in the depletion zone.  


### Lesson 1.2.2: Diodes

A diode is just a PN junction.  It has many uses, such as a rectifier.  In a rectifier a diode acts as a voltage activated gate which only allows the positive value of the AC voltage through to the output.  I think this is all I really need to say on this to move onto the transistors.  

### Lesson 1.2.3: About Those Transistors

Transistors contain 3 fundamental elements: Emitter, Base, and Collector.  The emitter gives off the current carriers (electrons or holes).  The base controls the flow of the current carriers. Finally, the collector collects the current carriers.  Two classifications of transistors: NPN and PNP.  The acronyms are fairly self explanatory but just in case. 

                                                   NPN Type                         NPN Schematic Representation
                                                     Base                                  _       _
                                                ____ ____ ____                      Emitter \^    / Collector
                                               | N  |  P |  N |                             _\___/_
                                        Emitter|____|____|____| Collector    --->              | Base
                                                    ^    ^                                     |
                                                    |    |
                                                 PN Junctions                                                       In schematic rep the arrow shows                                                                    the direction of hole flow.


                                                   PNP Type                         PNP Schematic Representation 
                                                     Base                                  _       _
                                                ____ ____ ____                      Emitter \v    / Collector
                                               | P  |  N |  P |                             _\___/_
                                        Emitter|____|____|____| Collector    --->              | Base
                                                    ^    ^                                     |
                                                    |    |
                                                 PN Junctions



We don't need to go into the details of how exactly these transistors are put into practice other than to say than are very useful as a switch.  (The ideal switch being characterized as having infinite resistance when open, zero resistance when closed, and an input to modulate the state). What allows transistors to do this is the gated control of current through the depletion zones.


### Lesson 1.2.4: Transistors as Logical Abstractions

Because transistors can act as switches we get to introduce a key concept that will allow us to bootstrap the stack from here.  That concept is abstraction.  We will take a step up the abstraction ladder, removing the need for picturing the actual circuit components and instead visualising these components as logical gates such as NOT, AND, OR, XOR, etc.

First we will cover the NOT gate, the (second) simplest of all logical operations.  Also called the inverter, this gate outputs the opposite value as its input.  This can be seen as the following truth table.

                      Input   Output
                    |   0   |   1   |
                    |   1   |   0   |

The AND gate is only slightly more complex.  This gate outputs 1 if and only if both inputs are 1.  Since this takes two inputs, it follows that the circuit requires 2 transistors.  We won't worry about that too much and just focus on the truth table which looks like:

                      Input_1    Input_2    Output
                    |   0     |     0    |     0   |
                    |   0     |     1    |     0   |
                    |   1     |     0    |     0   |
                    |   1     |     1    |     1   |

AND is technically performing the multiplication operation.  

The OR gate returns 1 for all two input combination unless they are both 0, then it returns 0.  Seen in the truth table below


                      Input_1    Input_2    Output
                    |   0     |     0    |     0   |
                    |   0     |     1    |     1   |
                    |   1     |     0    |     1   |
                    |   1     |     1    |     1   |

Basically returns 1 if any input is 1 (if input_1 OR input_2).  Performs a kind of binary addition.

Finally, there is one last fundamental operator which is the Buffer.  The Buffer is the simplest of all gates in that its output matches its input as seen in this truth table


                      Input   Output
                    |   0   |   0   |
                    |   1   |   1   |


That concludes the basic gates NOT, AND, and OR.  Next we will go over the universal gates NOR and NAND


The truth table for the NAND gate looks like:


                      Input_1    Input_2    Output
                    |   0     |     0    |     1   |
                    |   0     |     1    |     1   |
                    |   1     |     0    |     1   |
                    |   1     |     1    |     0   |

The NAND gate is nothing more than a linear combination of the AND gate and the NOT gate.  


If logic follows, the NOR gate is nothing more than the linear combination of the OR and NOT gates. The truth table should then look like

                      Input_1    Input_2    Output
                    |   0     |     0    |     1   |
                    |   0     |     1    |     0   |
                    |   1     |     0    |     0   |
                    |   1     |     1    |     0   |

NAND and NOR could be referred to as denial gates

For the last two gates we will talk about exclusive gates XOR and XNOR

The XOR gate gives an output of 1 if and only if one of the input values is 1
                      
                      Input_1    Input_2    Output
                    |   0     |     0    |     0   |
                    |   0     |     1    |     1   |
                    |   1     |     0    |     1   |
                    |   1     |     1    |     0   |


The XNOR gate outputs 1 if and only if both input values are equal

                      Input_1    Input_2    Output
                    |   0     |     0    |     1   |
                    |   0     |     1    |     0   |
                    |   1     |     0    |     0   |
                    |   1     |     1    |     1   |
It should be noted that all logical gates can be constructed by combinations of NOr gates (or NAND gates).  This is a further motivator that our method of abstraction will be the right direction for understanding.  


To summarize, transistors can be orchestrated to produce behavior analogous to truth tables of corresponding logical operations.  This is the fundamental pillar upon which we will build upon.  

### Lesson 1.2.5: Integrated Circuits

If we were living on the Trisolaran planet transistors and the idea of logic gates is really all we would need to build a computer.  Of course we live in the human world and time is not really of the essence (although this is changing) we can take a bit more time to develop more sophisticated ways of orchestrating transistors.  This is where Integrated Circuits come in.  

An Integrated Circuit is just a collection of transistors operating to perform logical task usually etched into silicon.  This frees us form using transistors as discrete components, allowing us to climb up the ladder of abstraction yet again.  At first ICs were very simple and only contained on the order of 10s of transistors. Fast forward to today and we have 1x1 cm chips with 10s of billions of transistors sitting in our pocket.  It should be noted that ICs also contain other electrical components such as resistors and capacitors but that's neither here nor there.  

We now have what we need to build up a FPGA.  The process would be as follows: orchestrate logical gates (made from transistors) to perform task within a logic cell -> connect the cells with a data bus and control bus? -> Hook up IO and create a memory unit for storing the boot procedures.  This is a rough outline of how one could build an FPGA using transistors which I'm sure will be amended as I move through the course. 

### Lesson 1.2.6: Abstraction, Abstraction, Abstraction

By now you should notice that these logical ops have predictable outputs which makes calculating them over and over wasteful in terms of compute.  This is where LUTs come in.  Rather than having logic cells calculate the output value of their respectiove truth tables LUTs stores the output values in a map like structure (actually not sure about this) where their corresponding inputs are the keys to the map.  This allows the processor to complete these logic gate "calculations" in O(1) time.  In practice LUTs are implemented as NxM bit RAM that can be overwritten by the programmer.  This is what gives FPGAs their power.

I now realize that the bridge from logic and the physical starts at the switch.  Of course, a switch can be made of really any physical gating process, people have made computers out of water, pipes and valves, what gives the transistor the advantage is the ability to scale it down.  A water based computer would be far too large even with the use of microfluidics.  Quite literaly, the transistor (really the Buffer) is the physical analog of the logcal bit of information.  This fact alone is what allows for large scale compute to happen. 

### Lesson 1.2.7: Logic cells from First Principles

The contents of a logic cell are as follows: 1 LUT (functionally but can be split into a few in the actual implementation details), a D flip-flop and a 2-to-1 mux (for bypassing the flip-flop).  We'll start with the LUTs. 

#### Lesson 1.2.7.a: LUTs

Typically built out of SRAM bits to hold the config memory (LUT-mask, CRAM) and a set of multiplexers for selecting the corresponding bit of CRAM.  for an n-input LUT (i.e. a LUT that can implement any function of n inputs) exactly 2^n SRAM bits are needed and in order to get 1 ouput you need a 2^n:1 multiplexer ratio (usually achieved by cascading mux)  The config is specified by the user. Say you wanted to setup a 4-bit adder; this adder would have 8 input ports and 4 output ports but would require 256 addressable SRAM locations (2^4*2^4).  The SRAM locations would have to hand coded by you, the programmer (of course this could be automated to some degree).  Mistakes in the lookup table will produce incorrect sums, keep GPT well away form this process lol.  

#### Lesson 1.2.7.b: D Flip-Flop



## Lesson 1.3: Summary

Okay, so let's get a lay of land so far.  We understand that transistors are the physical analog of the logical bit.  Combining these transistors in certain ways produces logic gates (AND, NOT, OR, Buffer, NAND, NOR, XOR, XNOR), from here we can stop thinking in the physical and do all of our work in the computational landscape.  We combine logic gates to carry out different operations.  An important side note here is that memory still uses transistors (albiet in a more static) fashion to store bits but the same undelying principles still apply.  The combined logcial ops are packeged upo into ICs which could be as simple as an 8 pin logic cell all the way up to the M3 chip.  In the case of FPGAs, they rely on LUTs to stand in for the more fundatmental logic operations which allows for reprogrambility as well as faster computation time.   




