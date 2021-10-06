/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:44:08 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/04 17:25:51 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default Constructor called!!" << std::endl;
}

Dog::Dog(std::string value)
{
    this->type = value;
    std::cout << "Dog default Constructor called!!" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called!!" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy Constructor called!!" << std::endl;
    *this = copy;
}

Dog & Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Assignment Constructor called!!" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "ouf ouf ouf !!" << std::endl;
}

std::string Dog::getType()
{
    return(this->type);
}