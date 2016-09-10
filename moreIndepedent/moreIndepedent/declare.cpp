#include "stdafx.h"
#include "declare.h"
#include "definition.h"


declare::declare()
{
}


declare::~declare()
{
}

std::shared_ptr<declare> declare::create(int a)
{
	return std::shared_ptr<declare>(new definition(a));
}
