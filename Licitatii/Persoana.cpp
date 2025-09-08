#include "Persoana.h"
#include "CasaLicitatii.h"
#include "SesiuneLicitatie.h"
void Persoana::inscriere_casa_licitatii(CasaLicitatii& casa_licitatii)
{
	casa_licitatii.adauga_persoana_inscrisa(this);
	este_inscris_la_casa = true;
}

void Persoana::abonare_sesiune_licitatie(SesiuneLicitatie& sesiune)
{
	sesiune.adauga_persoane(this);
}
