#pragma once
#include <stdexcept>
class Exceptie:
	public std::runtime_error
{
public:
	Exceptie(const std::string& msg_err) :std::runtime_error{ msg_err }{};
};

