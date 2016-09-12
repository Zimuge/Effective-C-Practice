// virtual replace with  function obj.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "FlyMethod.h"
#include "Bird.h"
#include "FlyMtdA.h"
#include "FlyMtdB.h"


int main()
{
	FlyMethod * p_fly_method = new FlyMtdA;
	FlyMethod * p_fly_mtdB = new FlyMtdB;
	Bird birdA(p_fly_method);
	Bird birdB(p_fly_mtdB);
	birdA.fly();
	birdB.fly();
    return 0;
}

