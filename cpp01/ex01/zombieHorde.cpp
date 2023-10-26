/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:36:03 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:32:40 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int n, std::string name)
{
	Zombie *zombH = new Zombie[n];
	
	for(int i = 0; i < n; i++) {
		zombH[i].setname(name);
	}
	return zombH;
}