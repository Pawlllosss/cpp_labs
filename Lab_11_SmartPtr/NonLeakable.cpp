#include "NonLeakable.h"
#include <iostream>

int NonLeakable::_id = 0;

NonLeakable::NonLeakable()
{
	std::cout<<"Constructing object "<<_id<<std::endl;
	_current_obj_id = _id;
	_id++;
}

void NonLeakable::Print() const
{
	std::cout<<"This is object with ID="<<_current_obj_id<<std::endl;
}

void * NonLeakable::operator new( size_t size_to_set)
{
	return new char[size_to_set];
}

NonLeakable* NonLeakable::CreateNonLeakable()
{
	return new NonLeakable;
}
