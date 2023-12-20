/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:48 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/13 11:59:26 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = i << this->_nb_frac_bit;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = f;
	return ;
}

Fixed::Fixed(Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = copy.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
		this->_fixed_point = copy._fixed_point;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.getRawBits();
	return (os);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
	return ;
}