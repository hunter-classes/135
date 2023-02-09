OBJECTS=main.o funcs.o morefuncs.o
CXX=g++
CXXFLAGS=
LDFLAGS=

main: main.o funcs.o morefuncs.o
	g++ $(LDFLAGS) -o main $(OBJECTS)

main.o: main.cpp funcs.h morefuncs.h
	g++ $(CXXFLAGS) -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp

morefuncs.o: morefuncs.cpp morefuncs.h funcs.h
	g++ $(CXXFLAGS) -c morefuncs.cpp

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"
	@echo " help"
