main: main.o mathfuncs.o
	g++ -o main main.o mathfuncs.o

main.o: main.cpp mathfuncs.h
	g++ -c main.cpp 

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	g++ -c mathfuncs.cpp

clean:
	rm -f main.o mathfuncs.o

help:
	@echo main: build executable main
	@echo clean: remove object files
	@echo help: this file
