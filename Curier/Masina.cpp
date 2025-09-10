#include "Masina.h"

std::string Masina::afiseaza_info() const
{
    std::string rezultat = "Masina:\nViteza Medie : " + std::to_string(get_viteza_medie()) +
        "\nCapacitate Maxima: " + std::to_string(get_capacitate_maxima());
    return rezultat;
}
