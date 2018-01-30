#include "Point3D.h"

Point3D::Point3D(int x, int y, int z): _x(x), _y(y), _z(z)
{

}

int Point3D::GetX() const
{
	return _x;
}

int Point3D::GetY() const
{
	return _y;
}

int Point3D::GetZ() const
{
	return _z;
}

bool Point3D::operator ==( const Point3D& point_to_compare)
{
	if( _x != point_to_compare._x )
		return false;
	
	if( _y != point_to_compare._y )
		return false;

	if( _z != point_to_compare._z )
		return false;

	return true;
}
