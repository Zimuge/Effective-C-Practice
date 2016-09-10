#include "stdafx.h"


// default constructor
A::A() :pi(nullptr), iVal(0)
{

}

// two parameters constructor
A::A(int * paraPi, int paraIVal) :pi(paraPi), iVal(paraIVal)
{
	
}

int* A::getPi() const
{
	return pi;
}

int A::getiVal() const
{
	return iVal;
}


//destrutor
A::~A()
{
}

void A::swap(A & a)
{
	using std::swap;
	swap(this->iVal, a.iVal);
	swap(this->pi, a.pi);
}
