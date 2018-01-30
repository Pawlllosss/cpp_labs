CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Katy

Katy: Main.o Angle.o
	$(CXX) $^ -o $@

Angle.o: Angle.cpp Angle.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Katy
