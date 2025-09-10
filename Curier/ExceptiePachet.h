#pragma once
#include "Exceptie.h"
class ExceptiePachet:
	public Exceptie
{
public:
	ExceptiePachet(const std::string& msg_err) :Exceptie{ msg_err } {};
};

