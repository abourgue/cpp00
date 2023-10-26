/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:17:03 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/11 16:26:57 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::info(void)
{
	std::cout << "INFOS" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	tabLvl[] = {"INFO", "DEBUG", "WARNING", "ERROR"};
	t_func		funcs[] = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (!level.compare(tabLvl[i]))
			return (this->*funcs[i])();
	}
	return;
}