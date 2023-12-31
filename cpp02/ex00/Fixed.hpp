/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:05 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 00:24:11 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	static const int	fractionalBits = 8;

	int	rawBits;
public:
	Fixed();
	Fixed(const Fixed& f);
	~Fixed();
	
	Fixed& operator=(const Fixed& f);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif