main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ -c $(CXXFLAGS) main.cpp

clean:
	rm -f main.o

debug: CXXFLAGS := $(CXXFLAGS) -DDEBUG=1 -g 
debug: main 
