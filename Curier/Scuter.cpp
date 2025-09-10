#include "Scuter.h"

std::string Scuter::afiseaza_info() const
{
    std::string rezultat = "Scuter:\nViteza Medie : " + std::to_string(get_viteza_medie()) +
        "\nCapacitate Maxima: " + std::to_string(get_capacitate_maxima());
    return rezultat;
}
