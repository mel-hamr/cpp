#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class   WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(std::string value);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal & operator=(const WrongAnimal &rhs);
        void    makeSound()const;
        std::string getType(void) const;
};



#endif