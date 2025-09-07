#pragma once
#include "Creature.h"
class Monster:
	public Creature
{
private:
	int daune;
public:
	virtual ~Monster() = default;
	Monster(const std::string& nume, int HP, int daune) :Creature{ nume, HP }, daune{ daune } {};
	// void ataca(Player& player) adica in player vedem daca atacul ajunge sau nu
};

