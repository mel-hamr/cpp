#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class   Ice : public AMateria
{
    private:
    public:
        Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &rhs);
        std::string const &getType() const;
        AMateria * clone() const;
        void    use(ICharacter &target);
        ~Ice();
};
#endif