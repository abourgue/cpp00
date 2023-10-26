/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:52:51 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/11 16:27:26 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string	input = "";
	Harl		harl;
	
	while (input.compare("EXIT")) {
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
		std::cin.clear();
	}
	return EXIT_SUCCESS;
}