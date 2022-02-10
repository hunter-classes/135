main: main.o utils.o adders.o
	g++ -o main main.o utils.o adders.o

main.o: main.cpp utils.h adders.h
	g++ -c main.cpp

adders.o: adders.cpp adders.h
	g++ -c adders.cpp

utils.o: utils.cpp utils.h adders.h
	g++ -c utils.cpp

clean:
	rm -f main.o adders.o utils.o

help:
	@echo "Targets:"
	@echo "  main"
	@echo "  clean"
	@echo "  help"

