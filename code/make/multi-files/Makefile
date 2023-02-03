main: main.o funcs.o morefuncs.o
	g++ -o main main.o funcs.o morefuncs.o
main.o: main.cpp funcs.h morefuncs.h
	g++ -c main.cpp
funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp
morefuncs.o: morefuncs.cpp morefuncs.h funcs.h
	g++ -c morefuncs.cpp

clean:
	rm -f main.o funcs.o morefuncs.o
