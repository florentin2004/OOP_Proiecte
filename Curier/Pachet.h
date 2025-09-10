#pragma once
#include <iostream>
#include <string>
class Pachet
{
private:
	static int ID;
	int id_unic;
	std::string adresa_destinatie;
	int greutate;
	int status; // 0 pentru In Depozit, 1 pentru In Tranzit si 2 pentru Livrat
public:
	virtual ~Pachet() = default;
	Pachet(const std::string& adresa_destinatie, int greutate) :
		id_unic{ ID++ }, adresa_destinatie{ adresa_destinatie }, greutate{ greutate }, status{ 0 } {
	};
	int get_id_unic()const { return id_unic; };
	const std::string& get_adresa_destinatie()const { return adresa_destinatie; };
	std::string get_status()const;
	int get_greutate()const { return greutate; };
};

std::ostream& operator<<(std::ostream& os, const Pachet& p);

