#include "Logger.h"
#include <fstream>
#include "Exceptie.h"
Logger& Logger::get_logger()
{
    static Logger l;
    return l;
}

void Logger::adauga_log(const std::string& msg)
{
    std::ofstream file_log(fisier_log, std::ios_base::app);
    if (!file_log.is_open())
        throw Exceptie("Probleme la Log");
    file_log << msg;
    file_log.close();
}
