#pragma once
#include "ICreature.h"
class Creature:
	public ICreature
{
private:
	std::string nume;
	int HP;
public:
	virtual ~Creature() = default;
	Creature(const std::string& nume, int HP) :nume{ nume }, HP{ HP } {};
	const std::string& get_nume()const { return nume; };
	int get_HP()const { return HP; };

	void take_damage(int damage_taken) { HP -= damage_taken; };
	void heal_damage(int damage_healed) { HP += damage_healed; };
};

