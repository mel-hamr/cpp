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
    Bureaucrat(std::string name,int grade):Name(name){
        	if(grade > 150)
		throw higher;
	if (grade < 0)
		throw lesser;
	
	this->Grade = grade;
}
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat & operator=(const Bureaucrat &rhs);

    
    class HigherRange : public std::exception 
    {
        virtual const char * what() const throw()
        {
            return ("The Grade is Too high . Try again !!\n");
        }        
    }higher;
    
    class LowerRange : public std::exception 
    {
        virtual const char * whate() const throw()
        {
            return ("The Grade is Too Low . Try again !!\n");
        }        
    }lesser;
    
};




#endif