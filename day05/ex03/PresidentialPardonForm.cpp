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

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    this->target = rhs.target;
    return (*this);
}

void PresidentialPardonForm::Action() const 
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}