CXXFLAGS=--coverage -g -O0

main: main.o fact.o
	g++ -o main --coverage -g -O0 main.o fact.o

tests: tests.o fact.o
	g++ -o tests --coverage -g -O0 tests.o fact.o
	./tests
	gcovr
	gcovr --html-details coverage.html

tests.o: tests.cpp fact.h

main.o: main.cpp fact.h

fact.o: fact.cpp fact.h

clean:
	rm -f main.o fact.o tests.o *gcda *html *gcno


