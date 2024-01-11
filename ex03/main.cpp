/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:45 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/11 11:38:09 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	{
		Point a(1, 1);
		Point b(0, -1);
		Point c(-1, 0);
		Point point(6.32, 4.5);

		std::cout << bsp(a, b, c, point) << std::endl;
	}
	{
		Fixed x(0.97f);
		Fixed y(-2.37f);
		Point a(x, y);
		Point b(-2.89, -2.81);
		Point c(-1.07, 0.31);
		Point point(-0.58, -0.89);

		std::cout << bsp(a, b, c, point) << std::endl;
	}
	return 0;
}
