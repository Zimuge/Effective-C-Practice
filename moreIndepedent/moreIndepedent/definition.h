#pragma once
#include "declare.h"
class definition :
	public declare
{
public:
	definition();
	definition(int a);
	virtual int getValue();
	virtual ~definition();
private:
	int value;
};

