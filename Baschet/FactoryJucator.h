#pragma once
#include "Fundas.h"
#include "Extrema.h"
#include <memory>
class FactoryJucator
{
public:
	static std::unique_ptr<Jucator> make_Fundas(const std::string& nume, const std::string& prenume, int nr_tricou,
		int procent_3_puncte, int procent_2_puncte, int procent_recuperare) {
		return std::make_unique<Fundas>(nume, prenume, nr_tricou, procent_3_puncte, procent_2_puncte, procent_recuperare);
	};
	static std::unique_ptr<Jucator> make_Extrema(const std::string& nume, const std::string& prenume, int nr_tricou,
		int procent_3_puncte, int procent_2_puncte, int procent_recuperare) {
		return std::make_unique<Extrema>(nume, prenume, nr_tricou, procent_3_puncte, procent_2_puncte, procent_recuperare);
	};
};

