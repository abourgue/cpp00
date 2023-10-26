/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:09:18 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:38:06 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string name = "";
	int			n;

	while (1) {
		std::cout << "please enter nb of zombies: ";
		std::cin >> n;
		if (n >= 1 && n <=2147483647)
			break;
		std::cin.clear();
	}
	std::cin.clear();
	std::cout << "Zombies's name: ";
	std::cin >> name;

	Zombie *horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	
	delete []horde;
	return EXIT_SUCCESS;
}