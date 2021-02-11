OBJECTS=main.o comparisons.o adders.o
CXXFLAGS=-Wall
LDFLAGS=-lm
CXX=g++

main: $(OBJECTS)
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp comparisons.h adders.h

comparisons.o: comparisons.cpp comparisons.h

adders.o: adders.cpp adders.h

clean:
	rm -f $(OBJECTS)

