#pragma once
#include "Monster.h"
class Dragon:
	public Monster
{
private:
	// la fel, poate are alti monstri in subordine
	// usor de modificat asa
public:
	virtual ~Dragon() = default;
	Dragon() : Monster{ "Dragon",800, 40 } {};
};

