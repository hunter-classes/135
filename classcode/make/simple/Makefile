# This is a Makefile
#target: dependencies
#	command to do to go from dependencies to target


main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ -c main.cpp

help:
	@echo This is a place
	@echo for help messages

stuff: morestuff yetmorestuff
	@ls
	@ls | wc

morestuff: evenmorestuff
	@echo this is morestuff

evenmorestuff:
	@echo and even more stuff

yetmorestuff:
	@echo yetmorestuff
