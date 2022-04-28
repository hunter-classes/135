logger: logger.o
	g++ -o logger logger.o

logger.o: logger.cpp
	g++ -c $(CXXFLAGS) logger.cpp

clean:
	rm -f logger.o

debug: CXXFLAGS := $(CXXFLAGS) -DDEBUG=1
debug: logger 
