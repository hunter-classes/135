OBJECTS=main.o mathfuncs.o
CXX=clang
LDFLAGS=-lm
CXXFLAGS=-Wall -Wpedantic

main: main.o mathfuncs.o
	g++ -o main $(CXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp 

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

clean:
	rm -f $(OBJECTS)

help:
	@echo main: build executable main
	@echo clean: remove object files
	@echo help: this file
