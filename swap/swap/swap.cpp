// swap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


using namespace std;

namespace std
{
	template<>
	void swap<A>(A & a, A & b)
	{
		a.swap(b);
	}
}

void swap(A &,A &);

class B
{
public:
	virtual void fun(int a)
	{
		cout << "this is B's fun" << endl;
	}
};

class D:public B
{
public:
	 void fun(int a,int b) const
	{
		cout << "this is D's fun" << endl;
	}
};

int main()
{
//	using  std::swap
	int ival = 6;
	A a;
	A b(&ival, ival);
	cout << "a::" << a.getPi() << " " << a.getiVal() << endl;
	cout << "b::" << b.getPi() << " " << b.getiVal() << endl;
	swap(a, b);
	cout << "a::" << a.getPi() << " " << a.getiVal() << endl;
	cout << "b::" << b.getPi() << " " << b.getiVal() << endl;
	
	B *pB = new B;
	
	D *pD = new D;
	
	pB->fun(ival);
	pD->fun(ival,ival);


    return 0;
	
}


void swap(A & a, A & b)
{
	a.swap(b);
}


