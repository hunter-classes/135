CXXFLAGS=-g

main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o


main.o: main.cpp fact.h
	g++ -c main.cpp

fact.o: fact.cpp
	g++ -c $(CXXFLAGS) fact.cpp


tests.o: tests.cpp fact.h
	g++ -c $(CXXFLAGS) tests.cpp


clean:
	rm -f tests.o main.o fact.o
