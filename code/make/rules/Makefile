OBJECTS=main.o mathfuncs.o
CXX=g++
LDFLAGS=-lm
CXXFLAGS=-Wall -Wpedantic

main: main.o mathfuncs.o
	g++ -o main $(CXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp mathfuncs.h

mathfuncs.o: mathfuncs.cpp mathfuncs.h

clean:
	rm -f $(OBJECTS)

help:
	@echo main: build executable main
	@echo clean: remove object files
	@echo help: this file
