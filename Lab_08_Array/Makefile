CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Array

Array: Main.o MyArray.o
	$(CXX) $^ -o $@

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

MyArray.o: MyArray.cpp MyArray.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Array
