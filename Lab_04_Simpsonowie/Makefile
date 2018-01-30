CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Simpsons

Simpsons: Main.o Functions.o
	$(CXX) $^ -o $@

Functions.o: Functions.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Simpsons
