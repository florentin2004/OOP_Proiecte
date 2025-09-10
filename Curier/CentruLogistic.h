#pragma once
#include <memory>
#include <vector>
#include "Pachet.h"
class Curier;
class CentruLogistic
{
private:
	CentruLogistic() = default;
	CentruLogistic(CentruLogistic& c) = delete;
	CentruLogistic(CentruLogistic&& c) = delete;
	CentruLogistic operator =(CentruLogistic& c) = delete;
	//
	std::string fisier_pachete = "pachete.txt";
	std::vector<std::unique_ptr<Pachet>> lista_pachete;
public:
	static CentruLogistic& get_centru_logistic();
	void incarcaPachete();
	void alocaPachete(Curier& c);
};

