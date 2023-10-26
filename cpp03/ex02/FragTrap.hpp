/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:51 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 12:10:56 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class  FragTrap : public ClapTrap
{
	private:
	
	FragTrap();
	
	public:
	
	FragTrap(const std::string name);
	~FragTrap();

	void	highFivesGuys();
};



#endif