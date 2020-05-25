#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T, typename Container = std::deque<T>>

class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator stack_iterator;

	stack_iterator begin() { return std::begin(std::stack<T, Container>::c); }
	stack_iterator end() { return std::end(std::stack<T, Container>::c); }

	const stack_iterator begin() const { return std::begin(std::stack<T, Container>::c); }
	const stack_iterator end() const { return std::end(std::stack<T, Container>::c); }
};

#endif