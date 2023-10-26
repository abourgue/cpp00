/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:18:36 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/16 18:53:56 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedP(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedP(n << _nbFB)
{
	std::cout << "Int param constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedP(roundf(f * (1 << _nbFB)))
{
	std::cout << "Float param constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


int	Fixed::getRawBits(void) const
{
	return this->_fixedP;
}

void	Fixed::setRawBits(const int Raw)
{
	_fixedP = Raw;
}

float	Fixed::toFloat() const
{
	return ((float)_fixedP / (1 << _nbFB));
}

int	Fixed::toInt() const
{
	return (_fixedP >> _nbFB);
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &src)
{
	o << src.toFloat();
	return o;
}