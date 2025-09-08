#include "MasinaEpoca.h"

std::string MasinaEpoca::afiseaza_detalii() const
{
    std::string rezultat = "Masina de Epoca: " + model + " din " + std::to_string(an_fabricatie) +
        "\nPret pornire: " + std::to_string(this->get_pret_pornire());
    return rezultat;
}
