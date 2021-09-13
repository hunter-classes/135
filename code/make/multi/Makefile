main: main.o mymath.o
	g++ -o main main.o mymath.o

main.o: main.cpp mymath.h
	g++ -c main.cpp 

mymath.o: mymath.cpp mymath.h
	g++ -c mymath.cpp

clean:
	rm -f mymath.o main.o

help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"

