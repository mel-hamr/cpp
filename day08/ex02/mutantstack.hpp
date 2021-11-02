#ifndef MUTANT_STACK
#define MUTANT_STACK

#include <algorithm>
#include <vector>
#include <array>
#include <deque>
#include <iostream>
#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{ 
    public:
        typedef typename std::stack<T, container>::container_type::iterator iterator;
        typedef typename std::stack<T, container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator;
        MutantStack<T, container>(){};
        MutantStack<T, container>(MutantStack<T, container> const &src)
        {
            *this = src;
        }
        MutantStack<T, container> &operator=(MutantStack const &src)
        {
            if (this != &src)
            {
                std::stack<T, container>::operator=(src);
            }
            return (*this);
        }
        iterator begin() {return (this->c.begin());}
        iterator end(){return (this->c.end());}
        const_iterator begin() const {return (this->c.begin());}
        const_iterator end() const {return (this->c.end());}
        reverse_iterator rbegin() {return (this->c.rbegin());}
        reverse_iterator rend() {return (this->c.rend());}
        const_reverse_iterator rbegin() const {return (this->c.rbegin());}
        const_reverse_iterator rend() const {return (this->c.rend());}

        ~MutantStack<T, container>(){}
};

#endif