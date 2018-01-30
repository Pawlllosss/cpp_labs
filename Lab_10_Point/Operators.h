#ifndef OperatorsH
#define OperatorsH
#include <iostream>

class Point3D;

//przeladowany operator << wypisujacy wspolrzedne punktu w formacie(x, y, z)
std::ostream& operator << ( std::ostream & output, const Point3D & point_to_print);

#endif
