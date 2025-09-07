#pragma once
#include "Abilitate.h"
class Dexteritate:
	public Abilitate
{
private:
public:
	virtual ~Dexteritate() = default;
	Dexteritate() :Abilitate{ "Dexteritate", 40 } {};
	int foloseste_dexteritate() { return this->get_valoare_abilitate(); };
};

