Simulation: Simulation.o Memory.o Cache.o Block.o Set.o
	gcc Simulation.o Memory.o Cache.o Block.o Set.o -o Simulation

Simulation.o: Simulation.c Memory.h Cache.h Block.h Set.h
	gcc Simulation.c -c

Memory.o: Memory.c Memory.h Cache.h Block.h Set.h
	gcc Memory.c -c

Cache.o: Cache.c Cache.h Block.h Set.h	
	gcc Cache.c -c

Block.o: Block.c Block.h
	gcc Block.c -c

Set.o: Set.c Set.h Block.h
	gcc Set.c -c
	