#pragma once
#include "Player.h"
#include "Schelet.h"
#include "Goblin.h"
#include "Dragon.h"
class Factory_Creature
{
public:
	static Player& make_Player() { return Player::get_player_instance(); };
	static Monster make_Schelet() { return Schelet(); };
	static Monster make_Goblin() { return Goblin(); };
	static Monster make_Dragon() { return Dragon(); };
};

