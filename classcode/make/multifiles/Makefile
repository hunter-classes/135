
main: main.o funcs.o funcs2.o
	g++ -o main main.o funcs.o funcs2.o 

main.o: main.cpp funcs.h funcs2.h
	g++ -c main.cpp 

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

funcs2.o: funcs2.cpp funcs.h funcs2.h
	g++ -c funcs2.cpp

clean:
	rm -f funcs.o main.o funcs2.o

help:
	@echo Targets:
	@echo "	main"
	@echo "	clean"
