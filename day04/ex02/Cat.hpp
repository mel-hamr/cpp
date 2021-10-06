/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:46:16 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/05 18:42:46 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(std::string value);
    Cat(const Cat &copy);
    virtual ~Cat();

    Cat &   operator=(const Cat &rhs);
    void    makeSound(void) const;
    std::string getType();
    void    getBrain();
    void    setBrain(char c);
};



#endif