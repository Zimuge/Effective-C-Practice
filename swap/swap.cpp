// swap.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "A.h"

using namespace std;

void swap(A &,A &);

int main()
{
//	using  std::swap
    
    return 0;
	
}


void swap(A & a, A & b)
{
	a.swap(b);
}

template<>
void swap<A>(A & a,A & b)
{
	a.swap(b);
}