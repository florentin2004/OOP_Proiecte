#pragma once
#include <vector>
#include "Room.h"
#include "Schelet.h"
#include "Goblin.h"
class CombatRoom:
	public Room
{
private:
	// vector de monstri
	std::vector<Monster> monstrii;
	// o sa fie un for care itereaza si va apela ataca(Player& player)
	// si o sa trebuiasca sa fie si un get_target
	// adica camera o sa primeasca o referinta la Player
	// toate camere o sa primeasca pentru a putea afecta jucatorul
public:
	virtual ~CombatRoom() = default;

};

