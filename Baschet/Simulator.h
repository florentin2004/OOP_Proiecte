#pragma once
#include "Echipa.h"
class Simulator
{
private:
	Simulator() = default;
	Simulator(Simulator& s) = delete;
	Simulator(Simulator&& s) = delete;
	Simulator operator =(Simulator s) = delete;
	//
	Echipa* echipa_gazda = nullptr;
	Echipa* echipa_oaspete = nullptr;
	int scor_gazda = 0;
	int scor_oaspete = 0;
	int* scor_posesie = nullptr;
	Echipa* echipa_cu_posesia = nullptr;
	//
	void ruleazaSimularea();
	void schimbaPosesia();
public:
	static Simulator& get_instance();
	void incepeMeci(Echipa& gazda, Echipa& oaspete);
};

