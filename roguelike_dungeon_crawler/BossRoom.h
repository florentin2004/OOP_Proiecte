#pragma once
#include "CombatRoom.h"
class BossRoom:
	public CombatRoom
{
private:
	// aici o sa fie vectorul de monstrii din clasa parinte
	// doar ca o sa fie doar un element, in caz de vrem mai mult easy peasy
public:
	virtual ~BossRoom() = default;
};

