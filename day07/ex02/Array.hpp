#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int lenght;
        T   *array;
    public:
        Array():array(new T[0]) , lenght(0){};
        Array(unsigned int n) : lenght(n) ,array(new T[n]) {};
        Array(const Array &copy)
        {
            *this = copy;
        }
        const Array  & operator=(const Array &rhs)
        {
            if(this != &rhs)
            {
                this->lenght = rhs.lenght;
                this->array = new T[this->lenght];
                for (unsigned int i = 0; i < rhs.lenght ; i++)
                    this->array[i] = rhs.array[i];
            }
            return *this;
        }
        class OutOfLimit : public std::exception
        {
            public:
            const char * what()const throw()
            {
                return ("This Element Is Out Of Range");
            }

        };
        T   &operator[](unsigned int nbr)  const 
        {
            if(nbr >= 0 && nbr < this->lenght)
                return (this->array[nbr]);
            else 
                throw OutOfLimit();
        }
        size_t size()
        {
            return(this->lenght);
        }
        ~Array()
        {
            delete [] array;
        };

};

#endif