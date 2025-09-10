#include "IVehicul.h"

std::ostream& operator<<(std::ostream& os, const IVehicul& v)
{
    os << v.afiseaza_info();
    return os;
}
