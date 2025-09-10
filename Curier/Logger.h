#pragma once
#include <string>
class Logger
{
private:
	Logger() = default;
	Logger(Logger& l) = delete;
	Logger(Logger&& l) = delete;
	Logger operator = (Logger& l) = delete;
	//
	std::string fisier_log = "log.txt";
public:
	static Logger& get_logger();
	void adauga_log(const std::string& msg);
};

