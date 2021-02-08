# This is a Makefile
# these are comments - lines that start with #
# when you type "make" on the command line in a directory/folder
# it looks for a file named Makefile, then MAKEFILE, then makefile to run
# to control the build
#
# targets: dependencies
#	command to go from dependencies to target

simple: simple.o
	g++ -o simple simple.o

simplo.o: simple.cpp
	g++ -c simple.cpp

help:
	@echo This is a place to put some help
	@echo on building this program using make

clean:
	rm -f simple.o
