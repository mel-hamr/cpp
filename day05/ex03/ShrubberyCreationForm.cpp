#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery",145,137)
{
    this->target = "home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string name) : Form(name,145,137)
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