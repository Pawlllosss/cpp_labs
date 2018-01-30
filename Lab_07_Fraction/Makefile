CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Fraction

Fraction: Main.o Fraction.o FractionArray.o
	$(CXX) $^ -o $@

Fraction.o: Fraction.cpp Fraction.h
	$(CXX) $(CXXFlags) -c $<

FractionArray.o: FractionArray.cpp FractionArray.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Fraction
