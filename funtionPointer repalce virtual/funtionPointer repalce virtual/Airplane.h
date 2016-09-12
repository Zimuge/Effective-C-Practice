#pragma once
#include <string>

class Airplane
{
public:
	typedef void(*flyMeathod) (const Airplane &);
	Airplane();
	void doFly();
	std::string get_name() const;
	Airplane(flyMeathod);
	~Airplane();
private:
	flyMeathod fly_mtd;
	static std::string name;
};

