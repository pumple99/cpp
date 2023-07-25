/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:02 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 00:55:36 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(): rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = i << Fixed::fractionalBits;
}

Fixed::Fixed(const float fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(fl * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawBits = f.getRawBits();
	return (*this);
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
