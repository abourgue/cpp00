/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:42 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 12:28:35 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap		playerA("Diego");
	ScavTrap const	copyA(playerA);
	ClapTrap		playerB("Sanchez");
	FragTrap		playerX("Roulio");
	FragTrap		playerY(playerX);
	

	playerA.attack("Judy");
	playerB.attack("quelqun");
	playerA.takeDamage(50);
	playerA.takeDamage(50);
	playerA.guardGate();
	playerX.attack("Judy");
	playerX.highFivesGuys();
	playerY.highFivesGuys();
	
	return EXIT_SUCCESS;
}