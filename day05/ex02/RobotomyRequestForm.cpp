
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Roboto",72,45)
{
    this->target = "home";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Roboto",72,45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy.getName(),72,45)
{
    this->target = copy.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    this->target = rhs.target;
    return (*this);
}

void RobotomyRequestForm::Action() const 
{
	int now;
	
	now = time(NULL);

	if (now % 2)
	{
		std::cout << this->target << " has been robotomized successfully "  << std::endl;
	}
	else
		std::cout << this->target << " has been failed "  << std::endl;

}