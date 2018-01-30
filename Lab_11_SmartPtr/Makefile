CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Mario

Mario: Main.o NonLeakable.o NonLeakablePtr.o
	$(CXX) $^ -o $@

NonLeakable.o : NonLeakable.cpp NonLeakable.h
	$(CXX) $(CXXFlags) -c $<

NonLeakablePtr.o : NonLeakablePtr.cpp NonLeakablePtr.h
	$(CXX) $(CXXFlags) -c $<

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Mario
