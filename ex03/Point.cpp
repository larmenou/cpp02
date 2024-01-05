/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:12:02 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/05 10:01:49 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point& copy) : _x(copy.getX()), _y(copy.getY())
{
	return ;
}

Fixed Point::getX() const
{
	return (_x);
}

Fixed Point::getY() const
{
	return (_y);
}

Point& Point::operator=(Point& copy)
{
	return (copy);
}

bool Point::operator==(const Point& a) const
{
	return (getX() == a.getX() && getY() == a.getY());
}

Point::~Point()
{
	return ;
}
