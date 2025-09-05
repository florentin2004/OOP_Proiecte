#include "Extrema.h"

bool Extrema::incearcaAruncare2Puncte() const
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

bool Extrema::incearcaRecuperare() const
{
	int procent = rand() % 100 + 1;
	return procent < this->get_procent_recuperare();
}

std::string Extrema::get_info() const
{
	std::string rezultat = "Fundas nr. " + std::to_string(get_nr_tricou()) + " " + get_nume() + " " + get_prenume();
	return rezultat;
}
