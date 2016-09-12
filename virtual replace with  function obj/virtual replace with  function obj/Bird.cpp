#include "stdafx.h"
#include "Bird.h"
#include "FlyMethod.h"


Bird::Bird()
{
}

Bird::Bird(FlyMethod* method)
{
	fly_mtd = method;
}


Bird::~Bird()
{
}

void Bird::fly()
{
	fly_mtd->fly(*this);
}