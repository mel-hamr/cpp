/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:48:58 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/05 15:12:26 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default Constructor called!!" << std::endl;
}

WrongCat::WrongCat(std::string value)
{
    this->type = value;
    std::cout << "WrongCat default Constructor called!!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy Constructor called!!" << std::endl;
    *this = copy;
}

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat Assignment Constructor called!!" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "weir Wrongcat : meow meow meow !!" << std::endl;
}

std::string WrongCat::getType()
{
    return(this->type);
}