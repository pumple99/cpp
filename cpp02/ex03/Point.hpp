/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:52:16 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 20:03:29 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& p);
	~Point();

	Point&	operator = (const Point& p);
	
	const Fixed	getX() const;
	const Fixed	getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif