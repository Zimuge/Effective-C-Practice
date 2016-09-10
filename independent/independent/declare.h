#pragma once
//#include "definition.h"
class definition;// only declared here£¬don't use the definition , only use definition in cpp
#include <memory>

//! so when the "definition.h" is rewrited, no need for recompile

class declare
{
public:
	declare();
	declare(int a);
	int getValue();
	virtual ~declare();
private:
	std::shared_ptr<definition> pdf;
	std::shared_ptr<definition> create(int a);
	
};

