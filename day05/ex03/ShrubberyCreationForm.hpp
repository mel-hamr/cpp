#ifndef SHRUBBERY_CREATION_FORM
#define SHRUBBERY_CREATION_FORM

#include <iostream>
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target,std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm &bery);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);
        void    Action()const ;
    
    class FileNotOpenExeception : public std::exception
    {
        virtual const char* What() const throw()
        {
            return (" File is did not open ");
        }
    };
};
#endif