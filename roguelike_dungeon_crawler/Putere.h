#pragma once
#include "Abilitate.h"
class Putere:
	public Abilitate
{
private:
public:
	virtual ~Putere() = default;
	Putere() :Abilitate{ "Putere",20 } {};
};

