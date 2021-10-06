/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:46:16 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/04 17:21:32 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat();
    Cat(std::string value);
    Cat(const Cat &copy);
    ~Cat();

    Cat &   operator=(const Cat &rhs);
    void    makeSound(void) const;
    std::string getType();
};



#endif