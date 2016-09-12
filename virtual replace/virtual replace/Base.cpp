#include "stdafx.h"
#include "Base.h"


Base::Base()
{
	std::cout << "Base::construct" << std::endl;
}


Base::~Base()
{
	std::cout << "Base::destruct" << std::endl;
}

void Base::interface()
{
	int a = 0;
	fly(a);
}

void Base::fly(int b)
{
	std::cout << "default fly" << std::endl;
}