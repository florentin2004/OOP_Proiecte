#pragma once
#include "Creature.h"
#include "Inventar.h"
#include "Abilitate.h"
#include <memory>
#include <vector>
class Trap;
class Player:
	public Creature
{
private:
	// trebuie sa pun inventar
	Inventar inventar;
	// abilitati
	std::vector<std::unique_ptr<Abilitate>> abilitati;
	Player() :Creature{ "Florentin",200 }, inventar{} {};
	Player(Player& p) = delete;
	Player(Player&& p) = delete;
	Player operator = (Player& p) = delete;
public:
	virtual ~Player() = default;
	static Player& get_player_instance();
	void get_abilitate(std::unique_ptr<Abilitate> abilitate_noua) {
		abilitati.push_back(std::move(abilitate_noua));
	}
	void dezarmeaza_capcana(Trap& trap);
};

