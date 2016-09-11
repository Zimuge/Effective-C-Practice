#include "stdafx.h"
#include "airplane.h"


airplane::airplane()
{
	std::cout << "airplane::construct " << std::endl;
}


airplane::~airplane()
{
	std::cout << "airplane::destruct " << std::endl;
}


void airplane::fly()
{	
	std::cout << "default fly" << std::endl;
}