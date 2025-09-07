#pragma once
#include "Monster.h"
class Goblin:
	public Monster
{
private:
public:
	virtual ~Goblin() = default;
	Goblin() :Monster{ "Goblin", 70, 20 } {};
};

