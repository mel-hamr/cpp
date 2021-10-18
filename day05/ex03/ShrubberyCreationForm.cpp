#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery",145,137)
{
    this->target = "home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shreubbery",145,137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getName(),145,137)
{
    this->target = copy.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    this->target = rhs.target;
    return (*this);
}

void ShrubberyCreationForm::Action() const 
{
	std::ofstream ofs(this->target + "_shrubbery");

	if (ofs.fail())
		throw FileNotOpenExeception();

	ofs <<"       /\\         " << std::endl;
	ofs <<"      /\\*\\      " << std::endl;
	ofs <<"     /\\O\\*\\     " << std::endl;
	ofs <<"    /*/\\/\\/\\    " << std::endl;
	ofs <<"   /\\O\\/\\*\\/\\   " << std::endl;
	ofs <<"  /\\*\\/\\*\\/\\/\\  " << std::endl;
	ofs <<" /\\O\\/\\/*/\\/O/\\ " << std::endl;
	ofs <<"       ||       " << std::endl;
	ofs <<"       ||       " << std::endl;
	ofs <<"       ||       " << std::endl;

	ofs.close();
}
const char * ShrubberyCreationForm::FileNotOpenExeception::what() const throw()
{
    return (" File is did not open ");
}