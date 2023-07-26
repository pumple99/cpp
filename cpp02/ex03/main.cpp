/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:55:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 20:46:07 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point b(0, 0);
	Point c(4, 0);
	Point a(0, 2);
	Point point1(1, 1);
	Point point2(0, 1);
	Point point3(-1, 1);
	Point point4(2, 1);
	Point point5(2, 0.5f);

	if (bsp(a, b, c, point1))
		std::cout << "point1 is in triangle" << std::endl;
	if (bsp(a, b, c, point2))
		std::cout << "point2 is in triangle" << std::endl;
	if (bsp(a, b, c, point3))
		std::cout << "point3 is in triangle" << std::endl;
	if (bsp(a, b, c, point4))
		std::cout << "point4 is in triangle" << std::endl;
	if (bsp(a, b, c, point5))
		std::cout << "point5 is in triangle" << std::endl;
}