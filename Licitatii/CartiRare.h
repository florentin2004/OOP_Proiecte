#pragma once
#include "Obiect.h"
class CartiRare:
	public Obiect
{
private:
	std::string titlu;
	std::string autor;
	int an_tiparire;
public:
	virtual ~CartiRare() = default;
	CartiRare(int pret_pornire, const std::string& titlu, const std::string& autor, int an_tiparire) :
		Obiect{ pret_pornire }, titlu{ titlu }, autor{ autor }, an_tiparire{ an_tiparire } {
	};
	std::string afiseaza_detalii()const override;
};

