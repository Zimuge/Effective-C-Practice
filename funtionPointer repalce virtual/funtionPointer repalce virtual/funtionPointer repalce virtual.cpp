// funtionPointer repalce virtual.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

void fly(const Airplane & airplane)
{
	cout << airplane.get_name() << " ";
	cout << "fly" << endl;
}

void flyA(const Airplane & airplane)
{
	cout << airplane.get_name() << " ";
	cout << "flyA" << endl;
}

void flyB(const Airplane & airplane)
{
	cout << airplane.get_name() << " " ;
	cout << "flyB" << endl;
}

int main()
{
	Airplane airplane(fly);
	Airplane airplaneA(flyA);
	Airplane airplaneB(flyB);
	//Airplane airplaneC(flyC);

	airplane.doFly();
	airplaneA.doFly();
	airplaneB.doFly();

    return 0;
}

