#include "stdafx.h"
#include "airplaneA.h"


airplaneA::airplaneA()
{
	std::cout << "airplaneA::construct " << std::endl;
}


airplaneA::~airplaneA()
{
	std::cout << "airplaneA::denstruct " << std::endl;
}

void airplaneA::fly()
{
	airplane::fly();
}