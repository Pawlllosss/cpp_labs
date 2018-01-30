CXX = g++
CXXFlags = -Wall -g

all: Magia

Magia: Main.o Czary.o
	$(CXX) $^ -o $@

Czary.o: Czary.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Magia
