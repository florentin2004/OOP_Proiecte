#pragma once
#include "Dexteritate.h"
#include "Putere.h"
#include <memory>
class Factory_Abilitati
{
public:
	static std::unique_ptr<Abilitate> make_Dexteritate() { return std::make_unique<Dexteritate>(); };
	static std::unique_ptr<Abilitate> make_Putere() { return std::make_unique<Putere>(); };
};

