#pragma once
class animal
{
public:
	typedef  std::function<void (const animal &)> Forage;// 觅食函数类型
	animal();
	animal(Forage);
	void eat();
	~animal();
private:
	Forage forage;
};

