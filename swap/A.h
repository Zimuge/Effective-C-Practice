#pragma once
class A
{
public:
	A();
	A(int*, int);
	int getiVal() const;
	int *getPi() const;
	~A();
	void swap(A &);
private:
	int * pi;
	int iVal;

};

