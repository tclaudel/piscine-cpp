#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ctime>

class Logger
{
	public:
		Logger(std::string fd);
		~Logger(void);
		void			log(std::string const &dest, std::string const &message);

	private:
		void 			logToFile(std::string const &message);
		void 			logToConsole(std::string const &message);
		std::string		makeLogEntry(std::string const &message) const;
		std::string		m_fd;
};

#endif
