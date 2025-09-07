#pragma once
#include <iostream>
class Trap
{
private:
	std::string denumire;
	int dificultate_dezarmare;
	int damage;
	bool este_dezarmat;
public:
	virtual ~Trap() = default;
	Trap() : denumire{}, dificultate_dezarmare{}, damage{}, este_dezarmat{false} {};
	Trap(const std::string& denumire, int dificultate_dezarmare, int damage) :
		denumire{ denumire }, dificultate_dezarmare{ dificultate_dezarmare }, damage{ damage },
		este_dezarmat{ false } {
	};
	const std::string& get_denumire()const { return denumire; };
	int get_dificultate_dezarmare()const { return dificultate_dezarmare; };
	int get_damage()const { return damage; };
	bool get_este_dezarmat()const { return este_dezarmat; };
	
	void dezarmeaza_capcana() { este_dezarmat = true; };
};

