OBJECTS=fact.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

fact.o: fact.cpp fact.h

main.o: main.cpp fact.h

tests.o: tests.cpp fact.h


clean:
	rm -f $(OBJECTS) main.o tests.o




