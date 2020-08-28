OBJECTS=main.o funcs.o morefuncs.o
CXXFLAGS=
LDFLAGS=

main: main.o $(OBJECTS)
	g++ $(LDFLAGS) -o main $(OBJECTS)

main.o: main.cpp funcs.h morefuncs.h
	g++ -c $(CXXFLAGS) $<

funcs.o: funcs.cpp funcs.h
	g++ -c $(CXXFLAGS) $<

morefuncs.o:  morefuncs.cpp  morefuncs.h
	g++ -c $(CXXFLAGS) $<

clean:
	rm -f $(OBJECTS)

theobs:
	echo $(OBJECTS)
