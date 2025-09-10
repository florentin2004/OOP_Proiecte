#include "Dubita.h"

std::string Dubita::afiseaza_info() const
{
    std::string rezultat = "Dubita:\nViteza Medie : " + std::to_string(get_viteza_medie()) +
        "\nCapacitate Maxima: " + std::to_string(get_capacitate_maxima());
    return rezultat;
}
