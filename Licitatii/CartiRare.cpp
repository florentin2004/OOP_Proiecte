#include "CartiRare.h"

std::string CartiRare::afiseaza_detalii() const
{
    std::string rezultat = "Carte Rara: " + titlu + " de " + autor+ " tiparita in "+ std::to_string(an_tiparire) +
        "\nPret pornire: " + std::to_string(this->get_pret_pornire());
    return rezultat;
}
