main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o


fact.o: fact.cpp fact.h doctest.h

main.o: main.cpp fact.h doctest.h

tests.o: tests.cpp doctest.h
