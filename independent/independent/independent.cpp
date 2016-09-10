// independent.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "declare.h"

using namespace std;
int main()
{
	declare obj;
	declare obj1(1);
	


	cout << obj.getValue() << endl;
	cout << obj1.getValue() << endl;



    return 0;
}

