#pragma once
#include <memory>
#include "Pachet.h"
class FactoryPachet
{
public:
	static std::unique_ptr<Pachet> make_Pachet(const std::string& adresa, int greutate) {
		return std::make_unique<Pachet>(adresa, greutate);
	};
};

