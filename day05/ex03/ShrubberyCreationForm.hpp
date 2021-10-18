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
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &bery);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);
        void    Action()const ;
    
    class FileNotOpenExeception : public std::exception
    {
        virtual const char* what() const throw();
    };
};
#endif