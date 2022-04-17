#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
	: Form(other)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	Form::operator=(other);
	return(*this);
}


void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::string filename = getTarget() + "_shrubberry";
	std::ofstream fout(filename.c_str());

	fout << "      !      " << std::endl;
	fout << "     <!>     " << std::endl;
	fout << "    <<!>>    " << std::endl;
	fout << "   <<<!>>>   " << std::endl;
	fout << "  <<<<!>>>>  " << std::endl;
	fout << " <<<<<!>>>>> " << std::endl;
	fout << "<<<<<<!>>>>>>" << std::endl;
	fout << "<<<<<<!>>>>>>" << std::endl;
	fout << "     !!!     " << std::endl;
	fout << "=====!!!=====" << std::endl;
}
