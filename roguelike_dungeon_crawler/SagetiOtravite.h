#pragma once
#include "Trap.h"
class SagetiOtravite:
	public Trap
{
private:
public:
	virtual ~SagetiOtravite() = default;
	SagetiOtravite():Trap{ "Sageti Otravite",40,30 } {};
};

