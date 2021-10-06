#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string value);
        Animal(const Animal &copy);
        Animal();
        ~Animal();
        Animal & operator=(const Animal &rhs);
        virtual void    makeSound()const = 0;
        virtual std::string getType(void) const;
};



#endif