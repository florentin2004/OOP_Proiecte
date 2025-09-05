#include "Fundas.h"

bool Fundas::incearcaAruncare3Puncte() const
{
    int procent = rand() % 100 + 1;
    if (procent < this->get_procent_3_puncte())
    {
        std::cout << (*this) << " a marcat 3 puncte\n";
        return true;
    }
    std::cout << (*this) << " a ratat 3 puncte\n";
    return false;
}

bool Fundas::incearcaAruncare2Puncte() const
{
    int procent = rand() % 100 + 1;
    if (procent < this->get_procent_2_puncte())
    {
        std::cout << (*this) << " a marcat 2 puncte\n";
        return true;
    }
    std::cout << (*this) << " a ratat 2 puncte\n";
    return false;
}

std::string Fundas::get_info() const
{
    std::string rezultat = "Fundas nr. " + std::to_string(get_nr_tricou()) + " " + get_nume() + " " + get_prenume();
    return rezultat;
}
