/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:24:53 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/23 17:51:52 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include "Data.hpp"


int main(int ac , char **av)
{
    if(ac != 2)
    {
        std::cout << "invalide arguments" <<std::endl;
        return 1;
    }
    Data    data(av[1]);
    if(data.check_error() == 1)
    {
        std::cout << "invalide Type" <<std::endl;
        return 1;
    }
    data.Parsetype();
    data.SetTypes();
    data.printTypes();
    return (0);
}
