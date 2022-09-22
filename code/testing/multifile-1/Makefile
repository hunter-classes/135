main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o
	g++ -o tests tests.o fact.o

tests.o: tests.cpp fact.h
	g++ -c tests.cpp

main.o: main.cpp fact.h
	g++ -c main.cpp

fact.o: fact.cpp fact.h
	g++ -c fact.cpp

clean:
	rm -f main.o fact.o tests.o

