/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:48:58 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/05 16:45:21 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain =  new Brain();
    std::cout << "Cat default Constructor called!!" << std::endl;
}

Cat::Cat(std::string value)
{
    this->type = value;
    this->brain =  new Brain();
    std::cout << "Cat default Constructor called!!" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called!!" << std::endl;
    delete (brain);
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy Constructor called!!" << std::endl;
    *this = copy;
}

Cat & Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat Assignment Constructor called!!" << std::endl;
    this->brain =  new Brain();
    *brain = *rhs.brain;
    this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "meow meow meow !!" << std::endl;
}

std::string Cat::getType()
{
    return(this->type);
}

void    Cat::getBrain()
{
    this->brain->getBrain();
}

void    Cat::setBrain(char c)
{
    this->brain->setBrain(c);
}
