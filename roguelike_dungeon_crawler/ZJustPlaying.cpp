#include "Factory_Creature.h"
#include "Factory_Trap.h"
#include "Factory_Abilitati.h"
int main()
{
	Player& player = Factory_Creature::make_Player();
	std::unique_ptr<Abilitate> abilitate1 = Factory_Abilitati::make_Dexteritate();
	player.get_abilitate(std::move(abilitate1));
	Trap capcana1 = Factory_Trap::make_GroapaTepi();
	player.dezarmeaza_capcana(capcana1);
	return 0;
}