#ifndef MY_OWN_UNIQUE_PTR_H
#define MY_OWN_UNIQUE_PTR_H

#include <iostream>

template <typename T>
class MyUniquePtr
{
private:
	T* ptr_;
public:
	MyUniquePtr(T* objPtr)
		: ptr_(objPtr)
	{
		std::cout << "MyUniquePtr constructor called" << std::endl;
	}

	~MyUniquePtr()
	{
		std::cout << "MyUniquePtr destructor called" << std::endl;
		delete ptr_;
	}

	T* operator->()
	{
		return ptr_;
	}
};

#endif