#pragma once
#include "Trap.h"
class GroapaTepi:
	public Trap
{
private:
public:
	virtual ~GroapaTepi() = default;
	GroapaTepi() :Trap{ "Groapa cu Tepi",40,30 } {};
};

