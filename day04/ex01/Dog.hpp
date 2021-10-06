/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:40:32 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/06 12:41:14 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(std::string type);
        Dog(const Dog &copy);
        
        Dog &   operator=(const Dog &rhs);
        void    makeSound(void)const ;
        std::string getType();
        void    getBrain();
        void    setBrain(char   c);
};

#endif
