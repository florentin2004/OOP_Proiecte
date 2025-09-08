#include "IObiect.h"

std::ostream& operator<<(std::ostream& os, IObiect& obiect)
{
    os << obiect.afiseaza_detalii();
    return os;
}
