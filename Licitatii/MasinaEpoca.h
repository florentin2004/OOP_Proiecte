#pragma once
#include "Obiect.h"
class MasinaEpoca:
	public Obiect
{
private:
	int an_fabricatie;
	std::string model;
public:
	virtual ~MasinaEpoca() = default;
	MasinaEpoca(int pret_pornire, int an_fabricatie, const std::string& model) :
		Obiect{ pret_pornire }, an_fabricatie{ an_fabricatie }, model{ model } {
	};
	std::string afiseaza_detalii()const override;
};

