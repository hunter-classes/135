OBJECTS=main.o utils.o adders.o
CXX=g++
CXXFLAGS=
LDFLAGS=


main: main.o utils.o adders.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o main $(OBJECTS)

main.o: main.cpp utils.h adders.h

adders.o: adders.cpp adders.h

utils.o: utils.cpp utils.h adders.h

clean:
	rm -f $(OBJECTS)

help:
	@echo "Targets:"
	@echo "  main"
	@echo "  clean"
	@echo "  help"

