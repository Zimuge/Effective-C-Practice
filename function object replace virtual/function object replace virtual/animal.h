#pragma once
class animal
{
public:
	typedef  std::function<void (const animal &)> Forage;// ��ʳ��������
	animal();
	animal(Forage);
	void eat();
	~animal();
private:
	Forage forage;
};

