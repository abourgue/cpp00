/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:56:24 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:30:03 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
	
		std::string	_name;

		std::string	getname(void) const;
	public:

		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setname(std::string name);
	
};

Zombie	*zombieHorde( int N, std::string name );

#endif