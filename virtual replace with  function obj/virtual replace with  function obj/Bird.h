#pragma once
class FlyMethod;
class Bird
{
public:
	Bird();
	Bird(FlyMethod *);
	~Bird();
	void fly();
private:
	FlyMethod * fly_mtd;

};

