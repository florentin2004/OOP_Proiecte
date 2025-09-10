#pragma once
#include <memory>
#include "Scuter.h"
#include "Masina.h"
#include "Dubita.h"
class FactoryVehicul
{
public:
	static std::unique_ptr<IVehicul> make_Scuter() {
		return std::make_unique<Scuter>();
	}
	static std::unique_ptr<IVehicul> make_Masina() {
		return std::make_unique<Masina>();
	}
	static std::unique_ptr<IVehicul> make_Dubita() {
		return std::make_unique<Dubita>();
	}
};

