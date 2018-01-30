CXX = g++
CXXFlags = -Wall -Wextra -pedantic -g

all: Point

Point: Main.o PointArray.o Point3D.o Operators.o
	$(CXX) $^ -o $@

Main.o: Main.cpp Main.h
	$(CXX) $(CXXFlags) -c $<

PointArray.o: PointArray.cpp PointArray.h
	$(CXX) $(CXXFlags) -c $<

Point3D: Point3D.cpp Point3D.h
	$(CXX) $(CXXFlags) -c $<

Operators.o: Operators.cpp Operators.h
	$(CXX) $(CXXFlags) -c $<

.PHONY : clean

clean: 
	rm -rf *.o Point
