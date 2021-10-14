#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Bureaucrat
{
private:
    const std::string Name;
    int     Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat & operator=(const Bureaucrat &rhs);

    const std::string getName();
    const int getGrade()const;
    
    void    Increment();
    void    Decrement();

    class GradeTooHighException : public std::exception 
    {
        virtual const char * what() const throw();
    };
    
    class GradeTooLowException : public std::exception 
    {
        virtual const char * what() const throw();
    };
    
};

std::ostream & operator<<(std::ostream & out,Bureaucrat  &a);


#endif