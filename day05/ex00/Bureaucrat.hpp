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

    class HigherRange : public std::exception 
    {
        virtual const char * whate() const throw()
        {
            return ("The Grade is Too high . Try again !!\n");
        }        
    };
    
    class HigherRange : public std::exception 
    {
        virtual const char * whate() const throw()
        {
            return ("The Grade is Too Low . Try again !!\n");
        }        
    };
    
};

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}



#endif