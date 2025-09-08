#pragma once
#include <vector>
#include <memory>
#include "SesiuneLicitatie.h"
class Persoana;
class CasaLicitatii
{
private:
	CasaLicitatii() = default;
	CasaLicitatii(CasaLicitatii& c) = delete;
	CasaLicitatii(CasaLicitatii&& c) = delete;
	CasaLicitatii operator =(CasaLicitatii& c) = delete;
	//
	std::vector<Persoana*> persoane_inscrise;
	std::vector<SesiuneLicitatie> sesiuni_de_licitatie;
public:
	virtual ~CasaLicitatii() = default;
	static CasaLicitatii& get_instance();
	void afiseaza_persoane_inscrise()const;
	void adauga_persoana_inscrisa(Persoana* persoana) {
		persoane_inscrise.push_back(persoana);
	};
};

