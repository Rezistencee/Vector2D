#ifndef __LOGGER_H__
#define __LOGGER_H__

#include "iostream"
#include "map"

enum Types {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class Logger {
    private:

    std::map<Types, std::string> loggerType = {
        {Types::DEBUG, "DEBUG"},
        {Types::INFO, "INFO"},
        {Types::WARNING, "WARNING"}, 
        {Types::ERROR, "ERROR"}
    };

    public:

    void ConsoleLog(Types logType, const std::string &message);
};

void Logger::ConsoleLog(Types logType, const std::string &message)
{
    std::cout << "\n" << "[" << loggerType.find(logType) -> second << "] :" << " " << message;
}


#endif // __LOGGER_H__