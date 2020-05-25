/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 10:02:15 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/06 15:24:33 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>

class Base
{
	public:
		virtual ~Base(void);
};


Base::~Base()
{
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

void		identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void		identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}

int			main(void)
{
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);

	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);

	delete a;
	delete b;
	delete c;
}