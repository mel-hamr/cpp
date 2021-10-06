/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:22:35 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/04 17:23:52 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    this->type = "unknown";
    std::cout << "WrongAnimal default Constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string value)
{
    this->type = value;
    std::cout << "WrongAnimal default Constructor called!!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy Constructor called!!" << std::endl;
    *this = copy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal Assignment Constructor called!!" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "weird WrongAnimal sound!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}