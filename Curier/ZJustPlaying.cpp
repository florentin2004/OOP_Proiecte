#include "FactoryVehicul.h"
#include "Pachet.h"
#include <vector>
#include "Curier.h"
#include "FactoryPachet.h"
int main()
{
	Pachet pachet("undeva", 30);
	std::vector<std::unique_ptr<IVehicul>> vehicule;
	vehicule.push_back(FactoryVehicul::make_Scuter());
	vehicule.push_back(FactoryVehicul::make_Masina());
	vehicule.push_back(FactoryVehicul::make_Dubita());
	for (auto& vehicul : vehicule)
	{
		std::cout << *vehicul << "\n\n";
	}
	std::cout << "-------------------------------------------\n";
	Curier curier1("Florentin", FactoryVehicul::make_Scuter());
	Curier curier2("Marian", FactoryVehicul::make_Masina());
	try
	{
		curier1.adauga_pachet(FactoryPachet::make_Pachet("iar",10));
		curier2.adauga_pachet(FactoryPachet::make_Pachet("dinnou",30));
		curier2.adauga_pachet(FactoryPachet::make_Pachet("iar",5));
		std::cout << curier2;
		std::cout << curier1 + curier2;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	return 0;
}