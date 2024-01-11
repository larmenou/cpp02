/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:11:49 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/05 10:36:04 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(Fixed x, Fixed y);
		Point(const Point& copy);
		Point& operator=(Point& copy);
		bool operator==(const Point& a) const;
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point();
		
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

# endif