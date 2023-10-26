/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:18:36 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/16 19:40:58 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedP(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedP(n << _nbFB)
{
	// std::cout << "Int param constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedP(roundf(f * (1 << _nbFB)))
{
	// std::cout << "Float param constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
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
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

std::ostream	&operator<<(std::ostream &o, const Fixed &src)
{
	o << src.toFloat();
	return o;
}

bool	Fixed::operator>(const Fixed &src) const
{
	return (this->getRawBits() > src.getRawBits());
}
bool	Fixed::operator<(const Fixed &src) const
{
	return (this->getRawBits() < src.getRawBits());
}
bool	Fixed::operator>=(const Fixed &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}
bool	Fixed::operator<=(const Fixed &src) const
{
	return (this->getRawBits() <= src.getRawBits());
}
bool	Fixed::operator==(const Fixed &src) const
{
	return (this->getRawBits() == src.getRawBits());
}
bool	Fixed::operator!=(const Fixed &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &src) const
{
	return Fixed((float)this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	return Fixed((float)this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	return Fixed((float)this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	return Fixed((float)this->toFloat() / src.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	
	this->operator++();
	return tmp;
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a < b ? b : a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a < b ? b : a);
}