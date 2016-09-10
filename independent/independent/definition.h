#pragma once
class definition
{
public:
	definition();
	definition(int a);
	int getValue() const;
	virtual ~definition();
private:
	int value;
};

