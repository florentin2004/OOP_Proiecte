#pragma once
#include "Exceptie.h"
class ExceptieCurier:
	public Exceptie
{
public:
	ExceptieCurier(const std::string& msg_err) :Exceptie{ msg_err } {};
};

