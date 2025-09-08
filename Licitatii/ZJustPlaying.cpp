#include <memory>
#include <vector>
#include "Factory_Obiect.h"
#include "Persoana.h"
#include "SesiuneLicitatie.h"
#include "CasaLicitatii.h"
int main()
{
	std::unique_ptr<IObiect>bijuterie = Factory_Obiect::make_Bijuterie(8000, "bratara", "smarald");
	std::unique_ptr<IObiect>masina = Factory_Obiect::make_MasinaEpoca(70000,1980,"Aston Martin");
	std::unique_ptr<IObiect>carte = Factory_Obiect::make_CarteRara(5000,"Nu Stiu","Cineva",2000);
	std::cout << *bijuterie<<"\n";
	std::cout << *masina<<"\n";
	std::cout << *carte<<"\n";

	CasaLicitatii& casa_licitatii = CasaLicitatii::get_instance();
	try
	{
	/*casa_licitatii.afiseaza_persoane_inscrise();*/
	Persoana persoana1("Florentin", 100000);
	persoana1.inscriere_casa_licitatii(casa_licitatii);
	casa_licitatii.afiseaza_persoane_inscrise();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what()<<"\n";
	}

	return 0;
}