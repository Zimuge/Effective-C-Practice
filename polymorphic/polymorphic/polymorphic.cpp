// polymorphic.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "airplane.h"
#include "airplaneA.h"
#include "airplaneB.h"
#include "airplaneC.h"


int f(int a, int b, int c)
{
	return 0;
}



int main()
{
	f(printf("%d", "a"), printf("%d", "b"), printf("%d", "c"));

	airplane * p_airplaneA = new airplaneA();
	airplane *p_airplaneB = new airplaneB();
	airplane *p_airplaneC = new airplaneC();

	p_airplaneA->fly();
	p_airplaneB->fly();
	p_airplaneC->fly();

	delete p_airplaneA;
	delete p_airplaneB;
	delete p_airplaneC;

    return 0;
}

