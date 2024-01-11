/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:45 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/11 11:21:57 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	const Fixed c(42.42f);

	a = Fixed( 1234.4321f );
	
	{
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;

		std::cout << "min is : " << Fixed::min(a, b) << std::endl;
		std::cout << "max is : " << Fixed::max(a, b) << std::endl;
		std::cout << "min is : " << Fixed::min(a, c) << std::endl;
		std::cout << "max is : " << Fixed::max(a, c) << std::endl;
	}
	
	{	
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
	}

	{
		std::cout << "a > b : " << (a > b) << std::endl;
		std::cout << "b > a : " << (b > a) << std::endl;
		std::cout << "a >= b : " << (a >= b) << std::endl;
		std::cout << "a < b : " << (a < b) << std::endl;
		std::cout << "a <= b : " << (a <= b) << std::endl;
		std::cout << "a == b : " << (a == b) << std::endl;
		std::cout << "a != b : " << (a != b) << std::endl;
	}

	{
		Fixed a;
		std::cout << "a is " << a << std::endl;
		std::cout << "a is " << ++a << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "a is " << a++ << std::endl;
		std::cout << "a is " << a << std::endl;
	}
	return 0;
}
