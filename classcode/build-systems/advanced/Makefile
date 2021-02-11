OBJECTS=main.o comparisons.o adders.o
FLAGS=
LDFLAGS=-lm

main: $(OBJECTS)
	g++ -o main $(LDFLAGS) $(OBJECTS)

main.o: main.cpp comparisons.h adders.h
	g++ -c $(FLAGS) main.cpp

comparisons.o: comparisons.cpp comparisons.h
	g++ -c $(FLAGS) comparisons.cpp

adders.o: adders.cpp adders.h
	g++ -c $(FLAGS) adders.cpp

clean:
	rm -f $(OBJECTS)

