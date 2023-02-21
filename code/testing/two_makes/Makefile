
main: main.o piglatinify.o
	g++ -o main main.o piglatinify.o

tests: tests.o piglatinify.o
	g++ -o tests tests.o piglatinify.o

tests.o: tests.cpp piglatinify.h

main.o: main.cpp piglatinify.h

piglatinify.o: piglatinify.cpp piglatinify.h

clean:
	rm -f main.o piglatinify.o tests.o
