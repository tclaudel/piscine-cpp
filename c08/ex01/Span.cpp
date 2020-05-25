#include "Span.hpp"

Span::Span(unsigned int n) : m_limit(n)
{
	m_array.reserve(n);
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span::~Span(void)
{
}

Span				&Span::operator=(const Span &rhs)
{
	this->m_limit = rhs.m_limit;
	return (*this);
}

void				Span::addNumber(int nb)
{
	if (m_array.size() < m_limit)
		m_array.push_back(nb);
	else
		throw Span::FullStorageException();
}

int					Span::shortestSpan(void)
{
	if (m_array.size() < 2)
		throw Span::NotEnoughException();
	std::vector<int> copy = m_array;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator current = copy.begin();
	std::vector<int>::iterator next_one = copy.begin() + 1;
	int diff = INT_MAX;
	int current_diff = INT_MAX;
	for (unsigned int i = 0; next_one != copy.end(); current++, next_one++)
	{
		current_diff = std::abs(*current - *next_one);

		if (current_diff < diff)
			diff = current_diff;
	}
	return (diff);
}

int					Span::longestSpan(void)
{
	int min = *std::min_element(m_array.begin(), m_array.end());
	int max = *std::max_element(m_array.begin(), m_array.end());
	return (max - min);
}

Span::FullStorageException::FullStorageException(void)
{
	return;
}

Span::FullStorageException::FullStorageException(FullStorageException const &obj)
{
	*this = obj;
	return;
}

Span::FullStorageException::~FullStorageException(void) throw()
{
	return;
}

Span::FullStorageException &Span::FullStorageException::operator=(FullStorageException const &r) 
{
	(void)r;
	return (*this);
}

const char* Span::FullStorageException::what() const throw()
{
	return ("Error: Storage is full");
}

Span::NotEnoughException::NotEnoughException(void)
{
	return;
}

Span::NotEnoughException::NotEnoughException(NotEnoughException const &obj)
{
	*this = obj;
	return;
}

Span::NotEnoughException::~NotEnoughException(void) throw()
{
	return;
}

Span::NotEnoughException &Span::NotEnoughException::operator=(NotEnoughException const &r) 
{
	(void)r;
	return (*this);
}

const char* Span::NotEnoughException::what() const throw()
{
	return ("Error: Need at least 2 values to work");
}
