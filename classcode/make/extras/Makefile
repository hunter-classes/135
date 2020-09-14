OBJECTS=main.o funcs.o funcs2.o
CXXFLAGS=-Wall -Wpedantic
LDFLAGS=-lm 

main: $(OBJECTS)
	g++ $(LDFLAGS) -o main $(OBJECTS)

main.o: main.cpp funcs.h funcs2.h

funcs.o: funcs.cpp funcs.h

funcs2.o: funcs2.cpp funcs.h funcs2.h


clean:
	rm -f $(OBJECTS)

help:
	@echo Targets:
	@echo "	main"
	@echo "	clean"
