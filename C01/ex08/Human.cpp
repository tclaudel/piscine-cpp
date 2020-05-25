#include "Human.hpp"
#include <functional>

typedef void (*actions) (STRING const);

void	Human::meleeAttack(STRING const &target)
{
	COUT << "Melee attack intended for " << target << ENDL;
}

void	Human::rangedAttack(STRING const &target)
{
	COUT << "Ranged attack intended for " << target << ENDL;
}

void	Human::intimidatingShout(STRING const &target)
{
	COUT << "Shouting on  " << target << ENDL;
}

void   Human::action(STRING const &action_name, std::string const &target)
{
	STRING	attacks[3] = {"melee", "ranged", "intimidatingShout"};
	void (Human::*fcts[3])(std::string const &)= {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	for (int i = 0; i < 3; i++)
	{
		if (action_name == attacks[i])
			(this->*fcts[i])(target);
	}
}