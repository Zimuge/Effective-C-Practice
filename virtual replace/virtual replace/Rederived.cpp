#include "stdafx.h"
#include "Rederived.h"


Rederived::Rederived()
{
	std::cout << "Rederived::construct" << std::endl;
}


Rederived::~Rederived()
{
	std::cout << "Rederived::destruct" << std::endl;
}

//void Rederived::fly(int a)
//{
//	std::cout << "Rederived::fly()" << std::endl;
//}