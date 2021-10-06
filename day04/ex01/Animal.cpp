/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:22:35 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/06 12:43:08 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "unknown";
    std::cout << "Animal default Constructor called!!" << std::endl;
}

Animal::Animal(std::string value)
{
    this->type = value;
    std::cout << "Animal default Constructor called!!" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called!!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy Constructor called!!" << std::endl;
    *this = copy;
}

Animal & Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal Assignment Constructor called!!" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "weird Animal sound!!" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}