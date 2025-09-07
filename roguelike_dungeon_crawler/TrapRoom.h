#pragma once
#include "Room.h"
#include "Trap.h"
class TrapRoom:
	public Room
{
private:
	// o capcana
	Trap capcana;
public:
	virtual ~TrapRoom() = default;
	TrapRoom() :Room{ "Camera cu Capcane" }, capcana{} {};
	void put_capcana(const Trap& capcana_de_pus) { capcana = capcana_de_pus; };
};

