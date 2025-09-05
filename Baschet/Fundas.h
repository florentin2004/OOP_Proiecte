#pragma once
#include "Jucator.h"
class Fundas:
	public Jucator
{
private:
public:
	virtual ~Fundas() = default;
	Fundas(const std::string& nume, const std::string& prenume, int nr_tricou,
		int procent_3_puncte, int procent_2_puncte, int procent_recuperare) :
		Jucator{nume, prenume, nr_tricou, procent_3_puncte,procent_2_puncte,procent_recuperare} {
	};
	bool incearcaAruncare3Puncte() const override;
	bool incearcaAruncare2Puncte() const override;
	bool incearcaRecuperare() const override {return false;};
	std::string get_info()const override;
};

