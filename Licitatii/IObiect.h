#pragma once
#include <iostream>
class IObiect
{
public:
	virtual ~IObiect() = default;
	virtual int get_id()const = 0;
	virtual int get_pret_pornire()const = 0;
	virtual int get_pret_licitat()const = 0;
	virtual int get_pret_tinta()const = 0;
	virtual std::string afiseaza_detalii()const = 0;
	virtual void incheie_licitatia(int pret_final) = 0;
};

std::ostream& operator <<(std::ostream& os, IObiect& obiect);
