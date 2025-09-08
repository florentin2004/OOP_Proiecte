#include "CasaLicitatii.h"
#include "Persoana.h"
#include "Exceptie.h"
CasaLicitatii& CasaLicitatii::get_instance()
{
    static CasaLicitatii casa;
    return casa;
}

void CasaLicitatii::afiseaza_persoane_inscrise() const
{
    if (persoane_inscrise.empty())
        throw Exceptie{ "Nu sunt persoane inscrise" };
    for (auto& persoana : persoane_inscrise)
    {
        std::cout << persoana->get_nume() << "\n";
    }
}
