// function object replace virtual.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "animal.h"


class fun
{
public:
	void operator () (const animal &)
	{
		std::cout << "fun's operator ()" << std::endl;
	}
};

class funA
{
public:
	void operator () (const animal &)
	{
		std::cout << "funA's operator ()" << std::endl;
	}
};


class funB
{
public:
	void operator () (const animal &)
	{
		std::cout << "funB's operator ()" << std::endl;
	}
};


int main()
{
	fun fun1;
	funA fun2;
	funB fun3;
	animal obj_animal1(fun1);
	animal obj_animal2(fun2);
	animal obj_animal3(fun3);


	obj_animal1.eat();
	obj_animal2.eat();
	obj_animal3.eat();

    return 0;
}

