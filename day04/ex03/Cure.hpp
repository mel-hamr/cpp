#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class   Cure : public AMateria
{
    private:
    public:
        Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &rhs);
        std::string const &getType() const;
        AMateria * clone() const;
        void    use(ICharacter &target);
        ~Cure();
};
#endif