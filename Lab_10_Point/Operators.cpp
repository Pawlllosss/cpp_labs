#include "Operators.h"
#include "Point3D.h"

std::ostream& operator << ( std::ostream & output, const Point3D & point_to_print)
{
	return output<<"("<<point_to_print._x<<", "<<point_to_print._y<<", "<<point_to_print._z<<")";
}

