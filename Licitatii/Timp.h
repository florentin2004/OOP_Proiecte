#pragma once
class Timp
{
private:
	int zi;
	int ora;
	int minute;
public:
	virtual ~Timp() = default;
	Timp() :zi{ 0 }, ora{ 0 }, minute{ 0 } {};
	void consuma_o_ora() { ora++; };
	void consuma_o_zi() { zi++; };
	void consuma_cateva_minute(int minute_consumate) { minute += minute_consumate; };
	int get_zi()const { return zi; };
	int get_ora()const { return ora; };
	int get_minute()const { return minute; };
};

