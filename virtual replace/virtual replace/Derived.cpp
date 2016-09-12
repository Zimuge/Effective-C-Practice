#include "stdafx.h"
#include "Derived.h"


Derived::Derived()
{
	std::cout << "Derived::construct" << std::endl;
}


Derived::~Derived()
{
	std::cout << "Derived::destruct" << std::endl;
}


void Derived::fly(int a)
{
	std::cout << "Derived::fly()" << std::endl;
}