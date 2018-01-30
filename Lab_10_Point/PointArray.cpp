#include "PointArray.h"

PointArray::PointArray( const int size , const Point3D & default_value ): _array_size(size), _default_value(default_value)
{
	_array = new Point3D*[_array_size];

	for( int i = 0 ; i < _array_size ; i++ )
		_array[i] = new Point3D(default_value.GetX(), default_value.GetY(), default_value.GetZ());

}

PointArray::PointArray( const PointArray & array_to_copy): _array_size(array_to_copy._array_size), _default_value(array_to_copy._default_value)
{
	_array = new Point3D*[_array_size];

	for( int i = 0 ; i < _array_size ; i++ )
		_array[i] = new Point3D(array_to_copy._array[i]->GetX(), array_to_copy._array[i]->GetY(), array_to_copy._array[i]->GetZ());
}

PointArray::~PointArray()
{
	for( int i = 0 ; i < _array_size ; i++ )
		delete _array[i];

	delete [] _array;
}

PointArray& PointArray::operator = ( const PointArray & array_to_copy)
{
	if( this == &array_to_copy )
		return * this;

	for( int i = 0 ; i < _array_size ; i++ )
		delete _array[i];

	delete [] _array;

	_array_size =	array_to_copy._array_size;
	_default_value = array_to_copy._default_value;

	_array = new Point3D*[array_to_copy._array_size];

	for( int i = 0 ; i < _array_size ; i++ )
		_array[i] = new Point3D(array_to_copy._array[i]->GetX(), array_to_copy._array[i]->GetY(), array_to_copy._array[i]->GetZ());

	return *this;
}

Point3D & PointArray::operator []( unsigned int index_array )
{
	return *(_array[index_array]);
}

bool PointArray::operator ==( const PointArray& array_to_compare)
{
	if( _array_size != array_to_compare._array_size )
		return false;

	for( int i = 0 ; i < _array_size ; i++)
	{
		if(!(*(_array[i]) == *(array_to_compare._array[i])))
			return false;
	}

	return true;
}

void PointArray::Print() const
{
	for(int i = 0 ; i < _array_size ; i++ )
		std::cout<<*(_array[i])<<std::endl;

}
