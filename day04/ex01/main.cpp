/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:50:18 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/06 12:41:10 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
    Dog c;
    Dog c1(c);
    Animal *a = new Dog();
    // c.getBrain();
    // c1.getBrain();
    
    // std::cout << "===================================\n";
    // c1.setBrain('\'');
    // std::cout  <<"===================================\n";

    // c.getBrain();
    // c1.getBrain();
    // Brain b,b1;
    
    // b.getBrain();
    // b1.getBrain();
}