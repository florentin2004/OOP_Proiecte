#include "Jucator.h"

std::ostream& operator<<(std::ostream& os, const Jucator& j)
{
    os << j.get_info();
    return os;
}
