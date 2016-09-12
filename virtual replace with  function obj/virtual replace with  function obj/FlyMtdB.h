#pragma once
#include "FlyMethod.h"
class FlyMtdB :
	public FlyMethod
{
public:
	FlyMtdB();
	virtual void fly(const Bird &);
	virtual ~FlyMtdB();
};

