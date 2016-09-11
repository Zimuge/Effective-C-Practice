#include "stdafx.h"
#include "airplaneC.h"


airplaneC::airplaneC()
{
	std::cout << "airplaneC::construct " << std::endl;
}


airplaneC::~airplaneC()
{
	std::cout << "airplaneC::destruct " << std::endl;
}

void airplaneC::fly()
{
	std::cout << "airplaneC::fly()" << std::endl;
}