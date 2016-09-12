#include "stdafx.h"
#include "FlyMtdA.h"


FlyMtdA::FlyMtdA()
{

}


FlyMtdA::~FlyMtdA()
{

}

void FlyMtdA::fly(const Bird & bird)
{
	std::cout << "FlyMtdA::fly()" << std::endl;
	FlyMethod::fly(bird);
}