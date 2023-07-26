/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:51:00 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/26 20:44:32 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static int	crossProductDirection(Point const s, Point const d, Point const point)
{
	Fixed	sd_x = d.getX() - s.getX();
	Fixed	sd_y = d.getY() - s.getY();
	Fixed	sp_x = point.getX() - s.getX();
	Fixed	sp_y = point.getY() - s.getY();
	Fixed	result = sd_x * sp_y - sd_y * sp_x;
	if (result > 0)
		return (1);
	else if (result < 0)
		return (-1);
	return (0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	dir;

	dir = crossProductDirection(a, b, point);
	if (dir == crossProductDirection(b, c, point) && \
	dir == crossProductDirection(c, a, point))
		return (true);
	return (false);
}