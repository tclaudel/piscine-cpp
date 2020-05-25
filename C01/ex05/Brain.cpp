#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream   buff;

    buff << this;
	m_address = buff.str();
}

Brain::~Brain()
{
	COUT << "Brain has been deleted" << ENDL;
}

std::string	Brain::identify()
{
	return (m_address);
}
