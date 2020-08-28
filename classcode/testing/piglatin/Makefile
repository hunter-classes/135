
main: main.o piglatin.o
	g++ -o main main.o piglatin.o

tests: tests.o piglatin.o
	g++ -o tests tests.o piglatin.o

main.o: main.cpp piglatin.h

piglatin.o: piglatin.cpp piglatin.h

tests.o: tests.cpp piglatin.h
