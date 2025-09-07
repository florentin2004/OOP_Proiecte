#pragma once
#include "Monster.h"
class Schelet:
	public Monster
{
private:
	// poate mai trebuie ceva aduagat ??? abilitati, just in case
public:
	virtual ~Schelet() = default;
	Schelet() :Monster{ "Schelet",120,12 } {};
};

