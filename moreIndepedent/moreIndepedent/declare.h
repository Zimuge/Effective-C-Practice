#pragma once
#include <memory>
class declare
{
public:
	declare();
	virtual int getValue() = 0;
	static std::shared_ptr<declare> create(int a);
	virtual ~declare();
};

