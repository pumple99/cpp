/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:02 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 17:19:35 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(): rawBits(0) {}

Fixed::Fixed(const int i)
{
	this->rawBits = i << Fixed::fractionalBits;
}

Fixed::Fixed(const float fl)
{
	this->rawBits = roundf(fl * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(const Fixed& f)
{
	*this = f;
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator = (const Fixed& f)
{
	this->rawBits = f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator + (const Fixed& f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator - (const Fixed& f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator * (const Fixed& f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator / (const Fixed& f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed&	Fixed::operator ++ ()
{
	++this->rawBits;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	f(*this);
	
	++this->rawBits;
	return (f);
}

Fixed&	Fixed::operator -- ()
{
	--this->rawBits;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	f(*this);
	
	--this->rawBits;
	return (f);
}

bool	Fixed::operator > (const Fixed& f) const
{
	return (this->rawBits > f.getRawBits());
}

bool	Fixed::operator < (const Fixed& f) const
{
	return (this->rawBits < f.getRawBits());
}

bool	Fixed::operator >= (const Fixed& f) const
{
	return (this->rawBits >= f.getRawBits());
}

bool	Fixed::operator <= (const Fixed& f) const
{
	return (this->rawBits <= f.getRawBits());
}

bool	Fixed::operator == (const Fixed& f) const
{
	return (this->rawBits == f.getRawBits());
}

bool	Fixed::operator != (const Fixed& f) const
{
	return (this->rawBits != f.getRawBits());
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

int		Fixed::getRawBits( void ) const
{
	return (this->rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->rawBits = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->rawBits) / (1 << Fixed::fractionalBits));
}

int		Fixed::toInt( void ) const
{
	return (this->rawBits >> Fixed::fractionalBits);
}

std::ostream& operator << (std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}
