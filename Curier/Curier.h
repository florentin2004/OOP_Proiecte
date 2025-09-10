#pragma once
#include <string>
#include <memory>
#include "IVehicul.h"
#include "Pachet.h"
#include <vector>
class Curier
{
private:
	std::string nume;
	std::unique_ptr<IVehicul> vehicul_curier;
	std::vector<std::unique_ptr<Pachet>> lista_pachete;
	int calculeaza_greutate_pachete()const;
public:
	Curier(const std::string& nume, std::unique_ptr<IVehicul> vehicul_curier) :
		nume{ nume }, vehicul_curier{ std::move(vehicul_curier) } {
	};
	const std::string& get_nume()const { return nume; };
	void adauga_pachet(std::unique_ptr<Pachet> pachet_nou);
	friend std::ostream& operator<<(std::ostream& os, const Curier& c);
	friend int operator +(const Curier& c1, const Curier& c2);
};
std::ostream& operator<<(std::ostream& os, const Curier& c);
int operator +(const Curier& c1, const Curier& c2);
