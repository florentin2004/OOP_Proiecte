#include <ctime>
#include "Fundas.h"
#include "Extrema.h"
#include <iostream>
#include "Echipa.h"
#include "FactoryJucator.h"
#include "Simulator.h"
int main()
{
	srand(time(nullptr));
	std::vector<std::unique_ptr<Jucator>> jucatori;
	jucatori.push_back(FactoryJucator::make_Fundas("Manea", "Narcis", 14, 70, 90, 100));
	jucatori.push_back(FactoryJucator::make_Extrema("Horea", "Alexandru", 9, 100, 60, 80));
	for (auto& jucator : jucatori)
	{
		std::cout << *jucator<<" :\n";
		std::cout << "Aruncare 3 puncte: ";
		std::cout << ((jucator->incearcaAruncare3Puncte()) ? "Succes" : "Ratare") << "\n";
		std::cout << "Aruncare 2 puncte: ";
		std::cout << ((jucator->incearcaAruncare2Puncte()) ? "Succes" : "Ratare") << "\n";
		std::cout << "Aruncare recuperare: ";
		std::cout << ((jucator->incearcaRecuperare()) ? "Succes" : "Ratare") << "\n";
	}

	Echipa echipa("Lakers");
	try {

	echipa.adaugaJucator(std::move(jucatori[0]));
	echipa.adaugaJucator(std::move(jucatori[1]));

	echipa.adaugaJucator(std::make_unique<Fundas>("Costache", "Negruzzi", 3, 100, 50, 80));
	echipa.adaugaJucator(std::make_unique<Extrema>("Mihai", "Eminovici", 6, 10, 90, 80));
	}
	catch(const std::exception& e){
		std::cout << e.what()<<"\n";
	}

	try {

	std::cout<<echipa.alege_jucator()->get_nume()<<"\n";
	std::cout<<echipa.alege_jucator()->get_nume()<<"\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}


	Echipa echipa2("Bulls");
	try
	{
		echipa2.adaugaJucator(FactoryJucator::make_Fundas("Viorel", "Catarama", 15, 80, 60, 40));
		echipa2.adaugaJucator(FactoryJucator::make_Fundas("Ancuta", "Dana", 12, 90, 70, 20));
		echipa2.adaugaJucator(FactoryJucator::make_Extrema("George", "Emanuel", 8, 40, 50, 90));
		echipa2.adaugaJucator(FactoryJucator::make_Extrema("Buntesti", "Claudiu", 11, 80, 90, 80));
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	Simulator::get_instance().incepeMeci(echipa,echipa2);
	return 0;
}