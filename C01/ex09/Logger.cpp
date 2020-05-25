#include "Logger.hpp"

Logger::Logger(std::string fd) : m_fd(fd)
{
}

Logger::~Logger()
{
}

void			Logger::log(std::string const &dest, std::string const &message)
{
	std::string outputs[2] = {"file", "console"};
	void	(Logger::*fct[2])(std::string const &)
	{
		&Logger::logToFile,
		&Logger::logToConsole
	};

	for (int i = 0; i < 2; i++)
	{
		if (dest == outputs[i])
			(this->*fct[i])(message);
	}
}

void			Logger::logToFile(std::string const &message)
{
	std::ofstream fdout(this->m_fd);
	fdout << makeLogEntry(message);
}

void			Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message);
}

std::string		Logger::makeLogEntry(std::string const &message) const
{
	std::stringstream str;
	time_t t = time(0);
	tm	*now = localtime(&t);

	str << (now->tm_year + 1900) << '-'
		<< (now->tm_mon + 1) << '-'
		<< now->tm_mday << " : " << message
		<< "\n";

	return (str.str());
}