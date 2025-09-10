#pragma once
#include <iostream>
class IVehicul
{
public:
	virtual ~IVehicul() = default;
	virtual std::string afiseaza_info()const = 0;
	virtual int get_capacitate_maxima()const = 0;
};
std::ostream& operator <<(std::ostream& os, const IVehicul& v);

