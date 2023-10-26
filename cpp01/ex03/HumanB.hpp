/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:02:21 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/10 17:07:10 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

	std::string _name;	
	Weapon *_weapon;

	public:

		HumanB(std::string name);
		~HumanB();
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
};

#endif