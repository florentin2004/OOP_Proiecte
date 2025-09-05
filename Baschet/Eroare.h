#pragma once
#include <stdexcept>
class Eroare:
	public std::runtime_error
{
public:
	Eroare(const std::string& msg_err) :std::runtime_error{ msg_err }{};
};

