/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:42 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/19 14:29:38 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap		playerA("Diego");
	ClapTrap const	copyA(playerA);
	ClapTrap		playerB("Judy");
	ClapTrap		playerC("t");

	playerC = playerA;
	playerA.attack("Judy");
	playerA.attack("l'autre");
	playerA.attack("l'autre2");
	playerB.takeDamage(3);
	playerC.takeDamage(3);
	
	return EXIT_SUCCESS;
}