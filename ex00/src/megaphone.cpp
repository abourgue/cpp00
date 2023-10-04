/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:50 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/04 16:09:30 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char *av[])
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}