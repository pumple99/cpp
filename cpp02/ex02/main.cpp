/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 17:29:45 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int	main()
{
	//-------------given code-----------
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	//-------------------------------------------

	Fixed c;
	std::cout << "\n\n------------------My test-----------------\n\n";

	if (a > c)
		std::cout << "a is bigger than c" << std::endl;
	if (a >= c)
		std::cout << "a is bigger or equal than c" << std::endl;
	if (a < c)
		std::cout << "c is bigger than a" << std::endl;
	if (a <= c)
		std::cout << "c is bigger or equal than a" << std::endl;
	if (a == c)
		std::cout << "a is equal to c" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;

	Fixed d(0.5f), e(3);
	std::cout << d + e << std::endl;
	std::cout << d - e << std::endl;
	std::cout << d * e << std::endl;
	std::cout << d / e << std::endl;
	std::cout << Fixed::min(d, e) << std::endl;
	return 0;
}