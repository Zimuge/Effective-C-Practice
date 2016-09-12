#pragma once
class Bird;
class FlyMethod
{
public:
	FlyMethod();
	virtual ~FlyMethod();
	virtual void fly(const Bird &) = 0;
};

