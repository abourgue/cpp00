/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:15:54 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/11 16:24:04 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

	private:

		void	info(void);
		void	debug(void);
		void	warning(void);
		void	error(void);

	public:

		Harl(void);
		~Harl(void);
		void	complain(std::string lvl);
};

typedef void (Harl::*t_func)(void);

#endif