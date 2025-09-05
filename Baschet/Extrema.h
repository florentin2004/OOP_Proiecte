#pragma once
#include "Jucator.h"
class Extrema:
	public Jucator
{
private:
public:
	virtual ~Extrema() = default;
	Extrema(const std::string& nume, const std::string& prenume, int nr_tricou,
		int procent_3_puncte, int procent_2_puncte, int procent_recuperare) :
		Jucator{ nume, prenume, nr_tricou, procent_3_puncte,procent_2_puncte,procent_recuperare } {
	};
	bool incearcaAruncare3Puncte() const override { return false; };
	bool incearcaAruncare2Puncte() const override;
	bool incearcaRecuperare() const override;
	std::string get_info()const override;
};

