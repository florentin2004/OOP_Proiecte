#pragma once
#include "IRoom.h"
class Room:
	public IRoom
{
private:
	std::string descriere;
public:
	virtual ~Room() = default;
	Room(const std::string& descriere) :descriere{ descriere } {};
	const std::string& get_descriere()const { return descriere; };
};

