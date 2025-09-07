#include "Player.h"
#include "Dexteritate.h"
#include "Trap.h"
Player& Player::get_player_instance()
{
    static Player player;
    return player;
}

void Player::dezarmeaza_capcana(Trap& trap)
{
    bool exista_dexteritate = false;;
    for (auto& abilitate : abilitati)
    {
        Dexteritate* dexteritate = dynamic_cast<Dexteritate*>(abilitate.get());
        if (dexteritate->foloseste_dexteritate())
        {
            exista_dexteritate = true;
            int procent_dexteritate = dexteritate->foloseste_dexteritate();
            if (procent_dexteritate >= trap.get_dificultate_dezarmare())
            {
                trap.dezarmeaza_capcana();
            }
            else
            {
                take_damage(trap.get_damage());
            }
        }
    }
    if(!exista_dexteritate)
        take_damage(trap.get_damage());
}
