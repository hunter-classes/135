OBJECTS=main.o fact.o tests.o fact-tests.o

main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o fact-tests.o
	g++ -o tests tests.o fact.o fact-tests.o

test.o: tests.cpp fact.h
	g++ -c tests.cpp

fact-tests.o: fact-tests.cpp fact.h
	g++ -c fact-tests.cpp

main.o: main.cpp fact.h
	g++ -c main.cpp

fact.o: fact.cpp fact.h
	g++ -c fact.cpp

clean:
	rm -f $(OBJECTS)


