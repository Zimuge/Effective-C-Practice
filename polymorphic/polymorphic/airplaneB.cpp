#include "stdafx.h"
#include "airplaneB.h"


airplaneB::airplaneB()
{
	std::cout << "airplaneB::construct " << std::endl;
}


airplaneB::~airplaneB()
{
	std::cout << "airplaneB::destruct " << std::endl;
}

void airplaneB::fly()
{
	airplane::fly();
}
