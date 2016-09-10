#include "stdafx.h"
#include "definition.h"


definition::definition():value(0)
{
}


definition::~definition()
{
}

definition::definition(int a) :value(a)
{
	
}

int definition::getValue()
{
	return  value;
}