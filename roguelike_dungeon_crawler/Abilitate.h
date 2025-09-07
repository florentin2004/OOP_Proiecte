#pragma once
#include <iostream>
class Abilitate
{
private:
	std::string denumire;
	int valoare;
public:
	virtual ~Abilitate() = default;
	Abilitate(const std::string& denumire, int valoare) :denumire{ denumire }, valoare{ valoare } {};
	const std::string& get_denumire_abilitate()const { return denumire; };
	int get_valoare_abilitate()const { return valoare; };
	// putem sa derivam de aici abilitatile propriu zis
};

