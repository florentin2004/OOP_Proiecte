#include "Echipa.h"
#include "EroareEchipa.h"

void Echipa::adaugaJucator(std::unique_ptr<Jucator> jucator_nou)
{
	int nr_jucatori = jucatori.size();
	if (nr_jucatori == JUCATORI_MAXIM)
		throw EroareEchipa{ "EchipaPlinaError" };
	jucatori.push_back(std::move(jucator_nou));
}

Jucator* Echipa::alege_jucator()
{
	if (jucatori.empty()) {
		throw EroareEchipa{ "EchipaGoalaError" };
	}
	int nr_jocatori = jucatori.size();
	int poz = rand() % nr_jocatori;
	return jucatori[poz].get();
}
