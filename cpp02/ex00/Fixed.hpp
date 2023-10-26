/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:50:40 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/12 13:36:44 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string.h>

class Fixed {
	
	private:

		int					_fixedP;
		static const int	_nbFB = 8;
		
	public:
	
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		~Fixed(void);

		int	getRawBits(void) const;
		void		setRawBits(const int raw);
};

#endif