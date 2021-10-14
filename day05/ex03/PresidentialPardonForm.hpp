#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target,std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &bery);
        PresidentialPardonForm & operator=(const PresidentialPardonForm &rhs);
        void    Action()const ;
    
};

#endif