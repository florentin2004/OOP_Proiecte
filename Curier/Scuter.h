#pragma once
#include "Vehicul.h"
class Scuter:
	public Vehicul
{
private:
public:
	virtual ~Scuter() = default;
	Scuter() :Vehicul{ 80,10 } {};
	std::string afiseaza_info()const override;
};

