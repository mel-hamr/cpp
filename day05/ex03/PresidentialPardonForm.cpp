#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Robot",25,5)
{
    this->target = "home";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name) : Form(name,25,5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy.getName(),25,5)
{
    this->target = copy.target;
}

void PresidentialPardonForm::Action() const 
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}