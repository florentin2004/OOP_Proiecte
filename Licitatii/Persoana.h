#pragma once
#include "IObiect.h"
class CasaLicitatii;
class SesiuneLicitatie;
class Persoana
{
private:
	std::string nume;
	int buget;
	std::unique_ptr<IObiect> obiect_detinut;
	bool este_inscris_la_casa;
	SesiuneLicitatie* sesiune_abonata;

public:
	Persoana(const std::string& nume,int buget) :
		nume{nume}, buget{ buget }, obiect_detinut{}, este_inscris_la_casa{ false }, sesiune_abonata{} {};
	std::string get_date_obiect() { return obiect_detinut->afiseaza_detalii(); };
	const std::string& get_nume()const { return nume; };
	int get_buget()const { return buget; };
	void primeste_obiect(std::unique_ptr<IObiect> obiect_primit) { obiect_detinut = std::move(obiect_primit); };
	void inscriere_casa_licitatii(CasaLicitatii& casa_licitatii);
	void abonare_sesiune_licitatie(SesiuneLicitatie& sesiune);
};

