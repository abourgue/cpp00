/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:26:24 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 13:26:26 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	protected:

		std::string		_name;
		unsigned int	_Hp;
		unsigned int	_Ep;
		unsigned int	_Ad;

		ClapTrap	(void);
		
	public:

		ClapTrap	(std::string name);
		ClapTrap	(const ClapTrap &rhs);
		ClapTrap	&operator=(const ClapTrap &rhs);
		~ClapTrap	(void);
		
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif