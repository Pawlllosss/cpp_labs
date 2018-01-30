#include "NonLeakablePtr.h"
#include <iostream>

NonLeakablePtr::NonLeakablePtr(NonLeakablePtr & non_leakable_ptr_to_copy)
{
	_ptr_to_NonLeakable = non_leakable_ptr_to_copy._ptr_to_NonLeakable; 

		non_leakable_ptr_to_copy._ptr_to_NonLeakable = 0;
}

NonLeakablePtr::NonLeakablePtr()
{

}


void NonLeakablePtr::MakeNewObject()
{
	_ptr_to_NonLeakable = NonLeakable::CreateNonLeakable();
}

NonLeakable * NonLeakablePtr::operator ->()
{
	return _ptr_to_NonLeakable;
}

void NonLeakablePtr::Print() const
{
	if (_ptr_to_NonLeakable )
		std::cout<<"Object pointing to "<<_ptr_to_NonLeakable<<std::endl;
	else
		std::cout<<"Object pointing to nothing"<<std::endl;
}

NonLeakablePtr & NonLeakablePtr::operator = ( NonLeakablePtr & non_leakable_ptr_to_assign )
{
	if( _ptr_to_NonLeakable == non_leakable_ptr_to_assign._ptr_to_NonLeakable )
		return *this;

	_ptr_to_NonLeakable = non_leakable_ptr_to_assign._ptr_to_NonLeakable;

	non_leakable_ptr_to_assign._ptr_to_NonLeakable = 0;

	return *this;
}

NonLeakable & NonLeakablePtr::operator * ()
{
	return * _ptr_to_NonLeakable;
}

NonLeakable * NonLeakablePtr::operator & ()
{
	return _ptr_to_NonLeakable;
}
