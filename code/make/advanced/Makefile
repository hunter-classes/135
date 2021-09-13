OBJECTS=main.o mymath.o
CXXFLAGS=-Wall -Wpedantic
LDFLAGS=-lm
main: main.o mymath.o
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp mymath.h
	g++ -c $(CXXFLAGS) main.cpp 

mymath.o: mymath.cpp mymath.h
	g++ -c $(CXXFLAGS) mymath.cpp

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"

