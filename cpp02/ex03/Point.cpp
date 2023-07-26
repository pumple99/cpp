/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:07:34 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 20:18:13 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& p): _x(p._x), _y(p._y) {}

Point::~Point() {}

Point&	Point::operator = (const Point& p)
{
	if (this == &p)
		return (*this);
	return (*this);
}

const Fixed	Point::getX() const
{
	return (this->_x);
}

const Fixed	Point::getY() const
{
	return (this->_y);
}
