/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:50:40 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/16 19:03:10 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string.h>

class Fixed {
	
	private:

		int					_fixedP;
		static const int	_nbFB = 8;
		
	 public:
	 
        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &src);
        ~Fixed(void);
        Fixed&  operator=(const Fixed &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const Raw);
        float   toFloat(void)   const;
        int     toInt(void)     const;

        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed&rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;

        Fixed   operator+(const Fixed &rhs) const;
        Fixed   operator-(const Fixed &rhs) const;
        Fixed   operator*(const Fixed &rhs) const;
        Fixed   operator/(const Fixed &rhs) const;

        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);

        static Fixed&   min(Fixed &a, Fixed &b);
        static Fixed&   max(Fixed &a, Fixed &b);
        static Fixed const&   min(Fixed const &a, Fixed const &b);
        static Fixed const&   max(Fixed const &a, Fixed const &b);
        
};

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs);

#endif