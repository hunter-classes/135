

main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o


fact.o: fact.cpp fact.h

main.o: main.cpp fact.h


tests.o: tests.cpp fact.h doctest.h

clean:
	rm -f main.o tests.o fact.o

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests

