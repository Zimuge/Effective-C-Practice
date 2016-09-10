#include "stdafx.h"
#include "declare.h"
// ReSharper disable once CppUnusedIncludeDirective
#include "definition.h"
#include <memory>


declare::declare()
{
	pdf = create(0);
}

declare::declare(int a)
{
	pdf = create(a);
}

declare::~declare()
{
	std::cout << "destroied" << std::endl;
}


std::shared_ptr<definition> declare::create(int a)
{
	return std::shared_ptr<definition>(new definition(a));
}


int declare::getValue()
{
	return pdf->getValue();
}