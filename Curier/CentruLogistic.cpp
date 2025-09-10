#include "CentruLogistic.h"
#include <fstream>
#include "ExceptiePachet.h"
#include <sstream>
#include "FactoryPachet.h"
#include "Curier.h"
#include <algorithm>
#include "ExceptieCurier.h"
#include "Logger.h"

CentruLogistic& CentruLogistic::get_centru_logistic()
{
    static CentruLogistic c;
    return c;
}

void CentruLogistic::incarcaPachete()
{
    std::ifstream file_in(fisier_pachete);
    if (!file_in.is_open())
        throw Exceptie("Nu s-a deschis fisierul pentru pachete");
    std::string linie;
    while (std::getline(file_in, linie))
    {
        std::stringstream ss(linie);
        std::string adresa;
        std::string greutate;
        if (std::getline(ss, adresa, ','), std::getline(ss, greutate))
        {
            int greutate_int = std::stoi(greutate);
            lista_pachete.push_back(FactoryPachet::make_Pachet(adresa, greutate_int));
        }
        else
        {
            throw ExceptiePachet("Nu s-a putut crea pachetul pe baza fisierului");
        }
    }
    std::sort(lista_pachete.begin(), lista_pachete.end(), [](const std::unique_ptr<Pachet>& p1, const std::unique_ptr<Pachet>& p2) {
        return p1->get_greutate() > p2->get_greutate(); });
}

void CentruLogistic::alocaPachete(Curier& c)
{
    if (lista_pachete.empty()) {
        std::cout << "Nu mai sunt pachete in depozit pentru alocare.\n";
        return;
    }

    // 1. Mutăm proprietatea primului pachet din listă către curier
    //    Atenție la excepții! Trebuie să facem asta într-un try...catch
    try {
        // Pasăm direct rezultatul lui std::move.
        c.adauga_pachet(std::move(lista_pachete.front()));
        // 2. Dacă adăugarea a reușit (nu a aruncat excepție), ștergem 
//    primul element (care acum este un nullptr) din listă.
        lista_pachete.erase(lista_pachete.begin());

        Logger::get_logger().adauga_log("Pachet alocat cu succes curierului " + c.get_nume());

    }
    catch (const ExceptieCurier& e) {
        // Curierul nu a avut loc. Pachetul rămâne în depozit.
        // Nu facem nimic, proprietatea nu a fost transferată de fapt.
        Logger::get_logger().adauga_log("Alocare esuata pentru " + c.get_nume() + ": " + e.what());
    }
}
