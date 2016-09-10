#include "stdafx.h"
#include "definition.h"


definition::definition()
{
}

definition::definition(int a) :value(a)
{

}

int definition::getValue() const 
{
	return value;
}


definition::~definition()
{
}
