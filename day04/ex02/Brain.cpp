#include "Brain.hpp"



void    Brain::setBrain()
{
    int i;

    for (i=0; i<100; i++)
    {
        this->ideas[i] = 'a';            // Convert to a character from a-z
    }
}

void    Brain::setBrain(char c)
{
    int i;
    for (i=0; i<100; i++)
    {
        this->ideas[i] = c;            // Convert to a character from a-z
    }
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout<< "Brain assignment operator called!!" << std::endl;
    for(int i = 0 ; i < 100 ; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}
Brain::Brain(const Brain &other)
{
    std::cout<< "Brain constractor called!!" << std::endl;
    *this = other;
}
Brain::Brain()
{
    std::cout<< "Brain constractor called!!" << std::endl;
    this->setBrain();
}
Brain::~Brain()
{
    std::cout << "Brain destructor called!!" << std::endl;
}
void    Brain::getBrain(void)
{
    for(int i = 0 ; i < 100 ; i++)
    {
        std::cout << this->ideas[i] ;
    }
    std::cout<<std::endl;
}