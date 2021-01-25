# What Am I Doing?

I'm programming a simulation of a supercomputer. Not a whole supercomputer, though.
This supercomputer is a collection of processors which pass create, pass, and receive messages.
I want to analyze the efficiency of this computer's ability to pass messages.

Specifically, I am testing a hypothetical kind of packet-switching (https://en.wikipedia.org/wiki/Packet_switching).
Virtual cut-through switching is a modification to the more classical cut-through switching (https://en.wikipedia.org/wiki/Cut-through_switching).
The idea is that if a "switch" is occupied passing a message, other messages which need to pass through the same switch can be stored.
This is promising because it prevents the system from getting too cluttered when the volume of messages is high.

# What does it look like?

This code is a remake of a Python code base I've already completed: https://github.com/horenbergerb/VirtualCuthroughRouting
In essence, the whole system is a network of inter-connected routers. The routers contain input/output ports and processors.
Processors generate messages, which are just a collection of flits (with a single header flit).
The messages must be transported to a destination processor somewhere else in the network.
They're passed from port to port until they reach the correct router, where they're then fed to the processor.

# Why?

I work with a professor who has made some interesting theoretical predictions about the average lifetime of a message
in systems that use virtual cut-through routing. My goal is to provide supporting evidence for his mathematical model.
My Python code worked for 2D models (every router has 4 neighbors), but it was too slow to work for 3D models (6 neighbors).
I'm hoping this C++ model will be fast enough to work for the 3D case!