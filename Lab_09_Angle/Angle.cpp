#include "Angle.h"
#include <cmath>

Angle::Angle(const double setAngle, const enum_TypeofAngle typeOfAngle)
{
	if(typeOfAngle)//stopnie (typeOfAngle == DEGREES == 1)
		_rad = (setAngle * M_PI / 180);
	else//radiany (typeOfAngle == RADIANS == 0)
		_rad = setAngle;

	normaliseRad();
}

Angle Angle::fromRadians(const double radians)
{
	return Angle(radians, RADIANS);
}

Angle Angle::fromDegrees(const double degrees)
{
	return Angle(degrees, DEGREES);
}

double Angle::toRad() const
{
	return _rad;
}

double Angle::toDeg() const
{
	return _rad * 180 / M_PI;
}

void Angle::normaliseRad()
{
		while(_rad<0)
			_rad += 2*M_PI;


		while(_rad>2*M_PI)
			_rad -= 2*M_PI;
}

Angle & Angle::add(const Angle & angleToAdd)
{
	_rad += angleToAdd._rad;

	normaliseRad();

	return *this;
}

Angle Angle::distance(const Angle & angle1, const Angle & angle2)
{
	if(angle1._rad - angle2._rad < M_PI)
		return Angle::fromRadians(angle1._rad - angle2._rad);
	else
		return Angle::fromRadians(angle2._rad - angle1._rad);
}

Angle::operator double() const
{
	return (double)_rad;
}
