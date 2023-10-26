/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:09:18 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:03:39 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string name = "";
	
	std::cin.clear();
	std::cout << "[heap] - Zombie's name: ";
	std::cin >> name;
	Zombie *zombie2 = newZombie(name);
	zombie2->announce();

	std::cout << "[stack] - Zombie's name: ";
	std::cin >> name;
	randomChump(name);
	
	delete zombie2;
	return EXIT_SUCCESS;
}