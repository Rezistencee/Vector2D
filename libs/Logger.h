#ifndef __LOGGER_H__
#define __LOGGER_H__

#include "iostream"

enum loggerType {
    DEBUG,
    INFO,
    WARNING
};


class Logger {
    private:

    std::string getEnumLabel(loggerType enumType);

    public:

    void ConsoleLog(loggerType logType, const std::string &message);

};

std::string Logger::getEnumLabel(loggerType enumType) {
    switch (enumType) {
    case 0 : {
        return "Debug";
        break;
    };

    case 1 : {
        return "INFO";
        break;
    };

    case 2 : {
        return "Warning";
        break;
    };
        
    default:
        return "Not recognized...";
    };
};

void Logger::ConsoleLog(loggerType logType, const std::string &message)
{
    std::cout << "\n" << "[" << getEnumLabel(logType) << "] :" << " " << message;
}


#endif // __LOGGER_H__