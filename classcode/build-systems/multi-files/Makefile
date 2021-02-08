

main: main.o comparisons.o adders.o
	g++ -o main main.o comparisons.o adders.o

main.o: main.cpp comparisons.h adders.h
	g++ -c main.cpp

comparisons.o: comparisons.cpp comparisons.h
	g++ -c comparisons.cpp

adders.o: adders.cpp adders.h
	g++ -c adders.cpp

clean:
	rm -f comparisons.o main.o adders.o
