#pragma once
#include "GroapaTepi.h"
#include "SagetiOtravite.h"
class Factory_Trap
{
public:
	static Trap make_GroapaTepi() { return GroapaTepi(); };
	static Trap make_SagetiOtravite() { return SagetiOtravite(); };
};

