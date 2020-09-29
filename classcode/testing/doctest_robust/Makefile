main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o fact_tests.o
	g++ -o tests tests.o fact.o fact_tests.o


fact.o: fact.cpp fact.h doctest.h

main.o: main.cpp fact.h doctest.h

tests.o: tests.cpp doctest.h

fact_tests.o: fact_tests.cpp fact.h



clean:
	rm -f main.o fact.o tests.o fact_tests.o

