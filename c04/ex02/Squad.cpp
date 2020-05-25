#include "Squad.hpp"

Squad::Squad(void) : m_units(0), m_marines(NULL)
{
}

Squad::Squad(const Squad &rhs)
{
	m_units = rhs.m_units;

	marinelink		*copy;
	marinelink		*input;

	copy = m_marines;
	input = rhs.m_marines;

	while (input)
	{
		if (copy != NULL)
			copy = NULL;
		else
			copy = new marinelink;
		copy->marine = input->marine;
		copy->next = NULL;
		copy = copy->next;
		input = input->next;
	}
	m_marines = copy;
	delete input;
	return;
}

Squad::~Squad(void)
{
	marinelink	*copy;
	if (m_marines != NULL)
	{
		while (m_marines != NULL)
		{
			copy = m_marines->next;
			delete m_marines->marine;
			delete m_marines;
			m_marines = copy;
		}
	}
}

Squad				&Squad::operator=(const Squad &rhs)
{
	this->m_units = rhs.m_units;

	marinelink		*to_delete;

	while (m_marines)
	{
		to_delete = m_marines->next;
		delete m_marines->marine;
		delete m_marines;
		this->m_marines = to_delete;
	}
	delete to_delete;

	marinelink		*copy;
	marinelink		*input;

	copy = m_marines;
	input = rhs.m_marines;

	while (input)
	{
		if (copy != NULL)
			copy = NULL;
		else
			copy = new marinelink;
		copy->marine = input->marine;
		copy->next = NULL;
		copy = copy->next;
		input = input->next;
	}
	m_marines = copy;
	delete input;

	return (*this);
}

int					Squad::getCount() const
{
	return (m_units);
}

ISpaceMarine		*Squad::getUnit(int i) const
{
	marinelink	*link;

	link = m_marines;
	if (i > m_units || i < 0)
		return (NULL);
	while (i--)
		link = link->next;
	return (link->marine);
}

int					Squad::push(ISpaceMarine *marine)
{
	marinelink	*copy;

	if (alreadyIn(marine))
		return (m_units);
	if (m_marines == NULL)
	{
		m_marines = new marinelink;
		m_marines->marine = marine;
		m_marines->next = NULL;
		m_units++;
		return (m_units);
	}
	copy = m_marines;
	while (copy->next)
		copy = copy->next;
	copy->next = new marinelink;
	copy->next->marine = marine;
	copy->next->next = NULL;
	m_units++;
	return (m_units);
}

bool				Squad::alreadyIn(ISpaceMarine *marine)
{
	marinelink		*link;
	int				i = 0;

	link = m_marines;
	while (i < m_units)
	{
		if (marine == link->marine)
			return (true);
		link = link->next;
		i++;
	}
	return (false);
}

