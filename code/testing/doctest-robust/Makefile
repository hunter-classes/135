

main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o


main.o: main.cpp fact.h
	g++ -c main.cpp

fact.o: fact.cpp
	g++ -c fact.cpp


tests.o: tests.cpp fact.h tests-fact.o
	g++ -c tests.cpp

tests-fact.o: tests-fact.cpp fact.h
	g++ -c tests-fact.cpp

clean:
	rm -f tests.o main.o fact.o
