main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp
	g++ -c main.cpp

funcs.o: funcs.cpp
	g++ -c funcs.cpp

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp
	g++ -c tests.cpp

clean:
	rm -f main.o funcs.o tests.o

