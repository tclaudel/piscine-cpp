#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(rhs.getName(), 145, 137, getTarget())
{
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

void							ShrubberyCreationForm::m_execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExecGrade()))
	{
		std::string		flux_name(getTarget() + "_shruberry");
		std::ofstream	flux(flux_name);
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNWWMMMMMMWMMWXXWWWWMMMMWNNXXWMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kO0KNNXXKOOOOddkOO0KKXKOkkxkKWMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMWNOdodxxkOxdooooooddodxxxkxdxdookKWMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMN0xollodddlclodxdoooccloloolcccclodOKWMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMWKxxdooddl:;;::ccc::cllllcllccc;;clodONWWMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMWN0OOkxdolc:;;,'''',;,,;,,,;;:lol:,,;;:ldkkkOKWMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMN0kxdloolll;,,,''',;:;;,,'.''',cc::::cllllooodxOXWMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMWN0xddlc::c:;;;,;;,'';;;,,;,'''';::;:clllool:::codxKNWMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMWNX0kdxxdolc;;::,,;;;;;,,;:;,,;,,;;;;;cc:cllc::lollcldxddOKXNWMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMXOxolol::cl::;;;,,;,,,,,;:::;,,,,:;,,;c:,''',,,:lodl:;cloloxONMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMWOlccc;,,:lccc:;;,,'.';:c:;,,,'.,;,',,,,,;,'''',;:ll:',:ccco0WMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMWK0d:,,:llc:;,,,,,'..',,''''''..'.'',,,,;,'''',,,;;;'',cx0XWMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMXo;:lc;,.''.,,'....',;,',,;,..';;,,,;;,,,,;;;cccc:,;xWMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMNd:cl:,,'''',;,''..','''',:,....'',,::;,,,,,::;;:::ckWMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMWKo:::;;,;;,,,,,;;...,'..............',::;'.......',:::xXMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMNxc:;,'',::;,''',,....'.........',,''''''..'.,,....',;:cOWMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMWO:''',;:;,,,'............''''..','''',,:clc,''''...'',c0MMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMXd,',;;,''';;,'...',......,xd'....,'.,:looc,'..'.....;xNMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMX0xc;,....':dolc;cc'.,''.'xd'....';lccoxOOo:'....,cx0NMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMWX0ko:cl::ldKNNWNOc,;c:,lc,c';dONNXXNWMMWXOxddx0NWMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMWXNWNXXXWMMMMM0ccdc'ol,',OMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0olo:',::dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMX0o'..;dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd..dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO',0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk''OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNX00Oc..ckO0KXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0OxxddooooddxxO0NMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		flux << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
	}
}
