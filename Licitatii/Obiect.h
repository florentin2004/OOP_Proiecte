#pragma once
#include "IObiect.h"
#include <string>
class Obiect:
	public IObiect
{
private:
	static int ID; // el o sa fie id-ul care se va incrementa
	int id;
	int pret_pornire;
	int pret_licitat;
	int pret_tinta;
public:
	virtual ~Obiect() = default;
	Obiect(int pret_pornire) :
		id{ ID++ }, pret_pornire{ pret_pornire }, pret_licitat{}, pret_tinta{ pret_pornire * 5 } {
	};
	int get_id()const override { return id; };
	int get_pret_pornire()const override { return pret_pornire; };
	int get_pret_licitat()const override { return pret_licitat; };
	int get_pret_tinta()const override { return pret_tinta; };
	void incheie_licitatia(int pret_final)override { pret_licitat = pret_final; };
};

