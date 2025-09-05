#pragma once
#include <string>
#include <random>
#include <iostream>
class Jucator
{
private:
	std::string nume;
	std::string prenume;
	int nr_tricou;
protected:
	int procent_3_puncte;
	int procent_2_puncte;
	int procent_recuperare;
public:
	virtual ~Jucator() = default;
	Jucator(const std::string& nume, const std::string& prenume, int nr_tricou,
		int procent_3_puncte, int procent_2_puncte, int procent_recuperare) :
		nume{ nume }, prenume{ prenume }, nr_tricou{ nr_tricou }, procent_3_puncte{ procent_3_puncte },
		procent_2_puncte{ procent_2_puncte }, procent_recuperare{ procent_recuperare } {
	};
	const std::string& get_nume()const { return nume; };
	const std::string& get_prenume()const { return prenume; };
	int get_nr_tricou()const { return nr_tricou; };
	int get_procent_3_puncte()const { return procent_3_puncte; };
	int get_procent_2_puncte()const { return procent_2_puncte; };
	int get_procent_recuperare()const { return procent_recuperare; };
	virtual bool incearcaAruncare3Puncte() const = 0;
	virtual bool incearcaAruncare2Puncte() const = 0;
	virtual bool incearcaRecuperare() const = 0;
	virtual std::string get_info()const = 0;
};
std::ostream& operator <<(std::ostream& os, const Jucator& j);

