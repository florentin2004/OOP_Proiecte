#pragma once
#include "Vehicul.h"
class Masina:
	public Vehicul
{
private:
public:
	virtual ~Masina() = default;
	Masina() :Vehicul{ 60, 40 } {};
	std::string afiseaza_info()const override;
};

