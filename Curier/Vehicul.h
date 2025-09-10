#pragma once
#include "IVehicul.h"
#include <string>
class Vehicul:
	public IVehicul
{
private:
	int viteza_medie;
	int capacitate_maxima;
public:
	virtual ~Vehicul() = default;
	Vehicul(int viteza_medie, int capacitate_maxima) :
		viteza_medie{ viteza_medie }, capacitate_maxima{ capacitate_maxima } {
	};
	int get_viteza_medie()const { return viteza_medie; };
	int get_capacitate_maxima()const { return capacitate_maxima; };
};

