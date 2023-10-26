/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:42:01 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 12:07:36 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:

		ScavTrap(void);
	
	public:

		ScavTrap(std::string name);
		~ScavTrap();

		void		attack(const std::string &target);
		void		guardGate(void);
	
};

#endif