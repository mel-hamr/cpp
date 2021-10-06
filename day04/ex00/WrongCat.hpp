/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:46:16 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/05 15:09:11 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    WrongCat(std::string value);
    WrongCat(const WrongCat &copy);
    ~WrongCat();

    WrongCat &   operator=(const WrongCat &rhs);
    void    makeSound(void) const;
    std::string getType();
};



#endif