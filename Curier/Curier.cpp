#include "Curier.h"
#include "ExceptieCurier.h"
int Curier::calculeaza_greutate_pachete()const
{
	int greutate = 0;
	for (auto& pachet : lista_pachete)
	{
		greutate += pachet->get_greutate();
	}
	return greutate;
}

void Curier::adauga_pachet(std::unique_ptr<Pachet> pachet_nou)
{
	if (calculeaza_greutate_pachete() + pachet_nou->get_greutate() > vehicul_curier->get_capacitate_maxima())
		throw ExceptieCurier("CapacitateDepasitaError");
	lista_pachete.push_back(std::move(pachet_nou));
}

std::ostream& operator<<(std::ostream& os, const Curier& c)
{
	os << "Nume: "<<c.get_nume() <<"; Vehicul "<<*c.vehicul_curier;
	os << "\nPachete:\n";
	for (auto& pachet : c.lista_pachete)
	{
		std::cout << *pachet<<"\n";
	}
	return os;
}

int operator+(const Curier& c1, const Curier& c2)
{
	return c1.calculeaza_greutate_pachete() + c2.calculeaza_greutate_pachete();
}
