/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:56:24 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:06:31 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
	
		std::string	_name;

	
	public:

		void announce(void);
		Zombie(std::string str);
		~Zombie(void);
	
};

void 	randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif