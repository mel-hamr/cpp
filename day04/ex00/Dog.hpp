/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:40:32 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/04 17:25:03 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(std::string type);
        Dog(const Dog &copy);
        
        Dog &   operator=(const Dog &rhs);
        void    makeSound(void)const ;
        std::string getType() ;
};

#endif
