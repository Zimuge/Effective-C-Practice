// TMP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

template<int N>
int factorial()
{
	return N * factorial<N - 1>();
}
template<>
int factorial<1>()
{
	return 1;
}


int main()
{
	int n = factorial<5>();
	std::cout << n << std::endl;
    return 0;
}



