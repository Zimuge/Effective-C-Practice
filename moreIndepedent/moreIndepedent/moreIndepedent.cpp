// moreIndepedent.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "declare.h"


using namespace std;
int main()
{
	std::shared_ptr<declare> pp(declare::create(6));
	std::shared_ptr<declare> pq(declare::create(1));
	cout << pp->getValue() << endl;
	cout << endl;
	cout << endl;
	cout << pq->getValue() << endl;
    return 0;
}

