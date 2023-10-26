/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:42 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/20 10:26:39 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap		playerA("Diego");
	ScavTrap const	copyA(playerA);
	ClapTrap		playerB("Sanchez");
	

	playerA.attack("Judy");
	playerB.attack("quelqun");
	playerA.takeDamage(50);
	playerA.takeDamage(50);
	playerA.guardGate();
	
	return EXIT_SUCCESS;
}