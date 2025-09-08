#pragma once
#include "Obiect.h"
class Bijuterie:
	public Obiect
{
private:
	std::string tip_bijuterie;
	std::string tip_piatra_pretioasa;
public:
	virtual ~Bijuterie() = default;
	Bijuterie(int pret_pornire, const std::string& tip_bijuterie, const std::string& tip_piatra_pretioasa) :
		Obiect{ pret_pornire }, tip_bijuterie{ tip_bijuterie }, tip_piatra_pretioasa{ tip_piatra_pretioasa } {
	};
	std::string afiseaza_detalii()const override;
};

