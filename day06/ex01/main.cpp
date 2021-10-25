/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamr <mel-hamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:22:12 by mel-hamr          #+#    #+#             */
/*   Updated: 2021/10/23 17:23:03 by mel-hamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	std::cout << "serialize called!!" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	std::cout << "deserialize called!!" << std::endl;
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data *d = new Data();
	uintptr_t raw = 5;

	d->x = 5;
	d->y = 10;

	std::cout << d->x << std::endl;
	std::cout << d->y << std::endl;
	raw = serialize(d);

	Data *d2;

	d2 = deserialize(raw);
	std::cout << d2->x << std::endl;
	std::cout << d2->y << std::endl;
}