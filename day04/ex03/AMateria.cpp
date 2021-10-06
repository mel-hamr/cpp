#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default constractor called" << std::endl;
    this->type = "materia";
}


AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria constractor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constractor called" << std::endl;
    *this = other;
}

AMateria & AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria assignment operator called" << std::endl;
    this->type = rhs.type;
    return(*this);
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}