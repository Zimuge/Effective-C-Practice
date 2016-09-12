#include "stdafx.h"
//#include "Airplane.h"

std::string Airplane::name = "airplane";

Airplane::Airplane():fly_mtd(nullptr)
{
}

Airplane::Airplane(flyMeathod fly):fly_mtd(fly)
{
	std::cout << "Airplane::AirPlane(flyMeathod fly)" << std::endl;
}

Airplane::~Airplane()
{
	std::cout << "Airplane::~Airplane" << std::endl;
}

void Airplane::doFly()
{
	fly_mtd(*this);
}

std::string Airplane::get_name() const
{
	return name;
}