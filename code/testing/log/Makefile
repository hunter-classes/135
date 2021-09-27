CXXFLAGS=-DLOGGING

main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ $(CXXFLAGS) -c main.cpp

clean:
	rm -f main.o
