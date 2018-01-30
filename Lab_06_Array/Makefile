CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Array

Array: Main.o Array.o
	$(CXX) $^ -o $@

Array.o: Array.cpp Array.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Array
