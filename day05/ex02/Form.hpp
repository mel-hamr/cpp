#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private :
        std::string Name;
        const   int Grade_to_sign;
        const   int Grade_to_execute;
        bool    Signed;
    public :
        Form();
        ~Form();
        Form(std::string name , int grade_to_sign , int grade_to_execute);
        Form(const Form &copy);
        Form &operator=(const Form &rhs);

        std::string getName()const ;
        const int getGradeToSign();
        const int getGradeToExecute();
        const int getSign();
        void    beSigned(Bureaucrat &bureaucrat);
        virtual void    Action() = 0;
        
    class HigherRange : public std::exception 
    {
        virtual const char * what() const throw()
        {
            return ("The Grade is Too high . Try again !!\n");
        }        
    }higher;
    
    class LowerRange : public std::exception 
    {
        virtual const char * what() const throw()
        {
            return ("The Grade is Too Low . Try again !!\n");
        }        
    }lesser;
};

std::ostream & operator<<(std::ostream & out,Form  &a);

#endif