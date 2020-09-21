
main: main.o piglatin.o
	g++ -o main main.o piglatin.o

main.o: main.cpp piglatin.h

piglatin.o: piglatin.cpp piglatin.h

test: test.o piglatin.o
	g++ -o test test.o piglatin.o


test.o: test.cpp piglatin.h
