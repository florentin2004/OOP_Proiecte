#pragma once
#include "Jucator.h"
#include <memory>
#include <vector>
class Echipa
{
private:
	std::string nume_echipa;
	std::vector<std::unique_ptr<Jucator>> jucatori;
	static const int JUCATORI_MAXIM = 3;
public:
	virtual ~Echipa() = default;
	Echipa(const std::string& nume_echipa) :nume_echipa{ nume_echipa } {};
	void adaugaJucator(std::unique_ptr<Jucator> jucator_nou);
	Jucator* alege_jucator();
	const std::string& get_nume_echipa()const { return nume_echipa; };
};

