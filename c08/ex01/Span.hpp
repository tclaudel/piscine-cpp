#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <exception>
# include <climits>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &rhs);
		~Span(void);
		Span				&operator=(const Span &rhs);

		void				addNumber(int nb);
		int					shortestSpan(void);
		int					longestSpan(void);

		class FullStorageException : public std::exception
		{
			public:
				
				FullStorageException(void);
				FullStorageException(FullStorageException const &obj);
				virtual ~FullStorageException(void) throw();
				FullStorageException &operator=(FullStorageException const &r);
				virtual const char* what() const throw();
		};

		class NotEnoughException : public std::exception
		{
			public:
				
				NotEnoughException(void);
				NotEnoughException(NotEnoughException const &obj);
				virtual ~NotEnoughException(void) throw();
				NotEnoughException &operator=(NotEnoughException const &r);
				virtual const char* what() const throw();
		};

	private:
		unsigned int		m_limit;
		std::vector<int>	m_array;
};

#endif