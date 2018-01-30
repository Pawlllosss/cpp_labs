CXX = g++
CXXFLAGS = -Wall -g -pedantic

all: Fractions

Fractions: Main.o Creators.o Destroyers.o FractionsFun.o
	$(CXX) $^ -o $@

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFLAGS) -c $<

Creators.o: Creators.cpp Creators.h
	$(CXX) $(CXXFLAGS) -c $<

Destroyers.o: Destroyers.cpp Destroyers.h
	$(CXX) $(CXXFLAGS) -c $<

FractionsFun.o: FractionsFun.cpp FractionsFun.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean

clean:
	rm -rf *.o Fractions
