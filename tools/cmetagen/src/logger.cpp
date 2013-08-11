#include "logger.h"

#include <iostream>

using namespace std;

namespace metagen {

Logger logger;

const Logger & getLogger()
{
	return logger;
}

void Logger::info(const std::string & message) const
{
	this->doLog(levelInfo, message);
}

void Logger::warn(const std::string & message) const
{
	this->doLog(levelWarn, message);
}

void Logger::error(const std::string & message) const
{
	cerr << message;
}

void Logger::doLog(LogLevel leve, const std::string & message) const
{
	cout << message;
}


} // namespace metagen
