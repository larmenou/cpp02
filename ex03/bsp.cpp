/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:11:56 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/05 10:03:29 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float det(Point const point, Point const a, Point const b)
{
	return ((a.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat())
		- (a.getY().toFloat() - point.getY().toFloat()) * (b.getX().toFloat() - point.getX().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a == b || a == c || b == c)
		return (false);
	else if (point == a || point == b || point == c)
		return (false);
	else if ((det(point, a, b) > 0) && (det(point, c, a) > 0) && (det(point, b,c) > 0))
		return (true);
	else if ((det(point, a, b) < 0) && (det(point, c, a) < 0) && (det(point, b,c) < 0))
		return (true);
	return (false);
}
