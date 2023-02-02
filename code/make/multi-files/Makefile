# a .o file will normally be dependent on
# its .cpp file and all local .h files it
# includes 
funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

morefuncs.o: morefuncs.cpp morefuncs.h funcs.h
	g++ -c morefuncs.cpp

