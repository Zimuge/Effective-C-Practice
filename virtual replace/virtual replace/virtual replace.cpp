// virtual replace.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Base.h"
#include  "Derived.h"
#include "Rederived.h"


int main()
{
	int a = 10;
	Base * p_base = new Derived();
	Derived *p_derived = new Rederived();
	//p_base->interface();
	p_base->fly();
	//p_derived->interface();
	//p_derived->fly(a);
	//D.fly();
	//delete p_derived;
    return 0;
}

