#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure Default constractor called" << std::endl;
    type = "cure";
}

Cure::~Cure()
{
    std::cout << "Cure destractor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy constractor called" << std::endl;
    *this = other;
}
Cure & Cure::operator=(const Cure &rhs)
{
    std::cout << "Cure Assignment operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

AMateria * Cure::clone() const
{
    AMateria *cure = new Cure();
    return (cure);
}

std::string const & Cure::getType() const 
{
    return (this->type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "  heals " << target.getName() << "’s wounds " << std::endl;
}