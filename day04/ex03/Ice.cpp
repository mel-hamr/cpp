#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Default constractor called" << std::endl;
    type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice destractor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constractor called" << std::endl;
    *this = other;
}
Ice & Ice::operator=(const Ice &rhs)
{
    std::cout << "Ice Assignment operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

AMateria * Ice::clone() const
{
    AMateria *ice = new Ice();
    return (ice);
}

std::string const & Ice::getType() const 
{
    return (this->type);
}

void Ice::use(ICharacter& target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}