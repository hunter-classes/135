

main: main.o comparisons.o
	g++ -o main main.o comparisons.o

main.o: main.cpp comparisons.h
	g++ -c main.cpp

comparisons.o: comparisons.cpp comparisons.h
	g++ -c comparisons.cpp

clean:
	rm -f comparisons.o main.o
