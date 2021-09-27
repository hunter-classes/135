OBJECTS=main.o mymath.o
CXX=g++
CXXFLAGS=-Wall
LDFLAGS=-lm
main: main.o mymath.o
	$(CXX) -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp mymath.h

mymath.o: mymath.cpp mymath.h

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"

