#pragma once
#include "IObiect.h"
#include <vector>
#include <memory>
class Persoana;
class SesiuneLicitatie
{
private:
	std::unique_ptr<IObiect> obiect_licitatie;
	std::vector<Persoana*> persoane_abonate;
public:
	virtual ~SesiuneLicitatie() = default;
	SesiuneLicitatie() :obiect_licitatie{}, persoane_abonate{} {};
	void adauga_obiect_licitatie(std::unique_ptr<IObiect> obiect_de_adaugat) {
		obiect_licitatie = std::move(obiect_de_adaugat);
	};
	void adauga_persoane(Persoana* persoana) { persoane_abonate.push_back(persoana); };
};

