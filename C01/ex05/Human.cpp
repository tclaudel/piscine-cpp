#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
}

Human::~Human()
{
	COUT << "Human's brain has been deleted" << ENDL;
}

STRING		Human::identify()
{
	return (m_brain.identify());
}

Brain		&Human::getBrain(void)
{
	return(m_brain);
}