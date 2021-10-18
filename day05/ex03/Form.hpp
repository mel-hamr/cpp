#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private :
        const std::string Name;
        const   int Grade_to_sign;
        const   int Grade_to_execute;
        bool    Signed;
    public :
        Form();
        ~Form();
        Form(std::string name , int grade_to_sign , int grade_to_execute);
        Form(const Form &copy);
        Form &operator=(const Form &rhs);

        const std::string getName() const ;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSign()const ;
        void    beSigned(Bureaucrat &bureaucrat);
        virtual void    Action() const  = 0;
        virtual void execute(Bureaucrat const &executor) const;
        
    class GradeTooHighException : public std::exception 
    {
        virtual const char * what() const throw();
    };
    class FormNotSignedException : public std::exception 
    {
        virtual const char * what() const throw();
    };
    
    class GradeTooLowException : public std::exception 
    {
        virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream & out,Form  &a);

#endif