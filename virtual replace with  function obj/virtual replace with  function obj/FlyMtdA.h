#pragma once
#include "FlyMethod.h"
class FlyMtdA :
	public FlyMethod
{
public:
	FlyMtdA();
	virtual void fly(const Bird &);
	virtual ~FlyMtdA();
};

