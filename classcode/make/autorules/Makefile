OBJECTS=main.o funcs.o morefuncs.o
CXXFLAGS=
LDFLAGS=

main: $(OBJECTS)
	g++ -o $@ $(LDFLAGS) $(OBJECTS)

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h morefuncs.h

morefuncs.o: morefuncs.cpp morefuncs.h

clean:
	rm -f $(OBJECTS)
