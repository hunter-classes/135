# use:
# g++ -MM *cpp
#
# to generate the dependencies

OBJECTS=main.o funcs.o funcs2.o
CXXFLAGS=
LDFLAGS=

build: main

main: $(OBJECTS)
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp funcs.h funcs2.h

funcs2.o: funcs2.cpp funcs2.h funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f $(OBJECTS)

help:
	@echo This is the help


test:
	@echo testing

install:
	@echo installing
