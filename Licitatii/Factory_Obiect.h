#pragma once
#include <memory>
#include "Bijuterie.h"
#include "MasinaEpoca.h"
#include "CartiRare.h"
class Factory_Obiect
{
public:
	static std::unique_ptr<IObiect> make_Bijuterie(int pret_pornire, const std::string& tip_bijuterie, const std::string& tip_piatra_pretioasa) {
		return std::make_unique<Bijuterie>(pret_pornire, tip_bijuterie, tip_piatra_pretioasa);
	}
	static std::unique_ptr<IObiect> make_MasinaEpoca(int pret_pornire, int an_fabricatie, const std::string& model) {
		return std::make_unique<MasinaEpoca>(pret_pornire, an_fabricatie, model);
	}
	static std::unique_ptr<IObiect> make_CarteRara(int pret_pornire, const std::string& titlu, const std::string& autor, int an_tiparire) {
		return std::make_unique<CartiRare>(pret_pornire, titlu, autor, an_tiparire);
	}
};

