/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:05 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 19:19:54 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	static const int	fractionalBits = 8;

	int	rawBits;
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float fl);
	Fixed(const Fixed& f);
	~Fixed();
	
	Fixed&	operator = (const Fixed& f);
	Fixed&	operator ++ ();
	Fixed	operator ++ (int);
	Fixed&	operator -- ();
	Fixed	operator -- (int);
	Fixed	operator + (const Fixed& f) const;
	Fixed	operator - (const Fixed& f) const;
	Fixed	operator * (const Fixed& f) const;
	Fixed	operator / (const Fixed& f) const;
	bool	operator > (const Fixed& f) const;
	bool	operator < (const Fixed& f) const;
	bool	operator >= (const Fixed& f) const;
	bool	operator <= (const Fixed& f) const;
	bool	operator == (const Fixed& f) const;
	bool	operator != (const Fixed& f) const;

	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& f);

#endif