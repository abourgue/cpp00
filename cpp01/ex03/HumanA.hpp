/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:01:11 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 15:50:28 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

	std::string _name;	
	Weapon *_weapon;

	public:

		HumanA(std::string name, Weapon &type);
		~HumanA(void);
		void attack(void) const;
};

#endif