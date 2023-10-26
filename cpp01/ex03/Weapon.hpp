/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:03:19 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/10 17:04:16 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string.h>

class Weapon {
	
	std::string _type;
	
	public:

	Weapon(std::string str);
	~Weapon(void);
	std::string getType(void) const;
	void 		setType(std::string type);
	
};

#endif