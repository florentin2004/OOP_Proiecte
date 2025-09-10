#pragma once
#include "Vehicul.h"
class Dubita:
	public Vehicul
{
private:
public:
	virtual ~Dubita() = default;
	Dubita() :Vehicul(40, 80) {};
	std::string afiseaza_info()const override;
};

