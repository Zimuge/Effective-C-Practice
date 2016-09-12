#include "stdafx.h"
#include "animal.h"


animal::animal()
{

}

animal::animal(Forage fun_forge)
{
	forage = fun_forge;
}


animal::~animal()
{

}

void animal::eat()
{
	forage(*this);
}