CXX = g++
CXXFlags = -Wall -g

all: Lab02

Lab02: Lab02.o ListFunctions.o
	$(CXX) $(CXXFlags) $^ -o $@

Lab02.o: Lab02.cpp Lab02.h
	$(CXX) -c $<

ListFunctions.o: ListFunctions.cpp Lab02.h
	$(CXX) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Lab02
