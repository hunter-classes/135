OBJECTS=fact.o misc.o
CXXFLAGS=--coverage -g -O0

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests $(CXXFLAGS) tests.o $(OBJECTS)

fact.o: fact.cpp fact.h

misc.o: misc.cpp misc.h

main.o: main.cpp fact.h

tests.o: tests.cpp fact.h misc.h


clean:
	rm -f $(OBJECTS) main.o tests.o




