#include "Bijuterie.h"

std::string Bijuterie::afiseaza_detalii() const
{
    std::string rezultat = "Bijuterie: " + tip_bijuterie + " cu " + tip_piatra_pretioasa + 
        "\nPret pornire: " + std::to_string(this->get_pret_pornire());
    return rezultat;
}
