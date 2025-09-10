#include "Pachet.h"

int Pachet::ID = 1;

std::string Pachet::get_status() const
{
	// 0 pentru In Depozit, 1 pentru In Tranzit si 2 pentru Livrat
	if (status == 0)
		return "In Depozit";
	else
		if (status == 1)
			return "In Tranzit";
	return "Livrat";
}

std::ostream& operator<<(std::ostream& os, const Pachet& p)
{
	os<<"Pachet, id: " << p.get_id_unic() << ", greutate: " << p.get_greutate() << ", status: " << p.get_status()<< ", adresa: " << p.get_adresa_destinatie();
	return os;
}
