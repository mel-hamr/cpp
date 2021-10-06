/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:50:18 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/05 17:53:32 by mel-hamr         ###   ########.fr       */
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
    

    c.getBrain();
    c1.getBrain();
    
    std::cout << "===================================\n";
    c1.setBrain('\'');
    std::cout  <<"===================================\n";

    c.getBrain();
    c1.getBrain();
    // Brain b,b1;
    
    // b.getBrain();
    // b1.getBrain();
}