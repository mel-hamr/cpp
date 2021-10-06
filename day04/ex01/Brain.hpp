#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &rhs);
        void    getBrain(void);
        void setBrain();
        void setBrain(char c);
};

#endif