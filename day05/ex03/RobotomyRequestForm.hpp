#ifndef ROBOT_MY_REQUEST_HPP
#define ROBOT_MY_REQUEST_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &bery);
        RobotomyRequestForm & operator=(const RobotomyRequestForm &rhs);
        void    Action()const ;
    
};




#endif