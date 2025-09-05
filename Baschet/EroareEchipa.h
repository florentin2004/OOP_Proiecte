#pragma once
#include "Eroare.h"
class EroareEchipa:
	public Eroare
{
public:
	EroareEchipa(const std::string& msg_err) :Eroare{ msg_err } {};
};

