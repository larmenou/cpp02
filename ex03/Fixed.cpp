/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:48 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/11 10:24:14 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_point = 0;
	return ;
}

Fixed::Fixed(const int i)
{
	this->_fixed_point = i << this->_nb_frac_bit;
	return ;
}

Fixed::Fixed(const float f)
{
	this->_fixed_point = (int)roundf(f * (1 << _nb_frac_bit));
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	setRawBits(copy.getRawBits());
	return (*this);
}

// operators
//    arithmetic

Fixed Fixed::operator+(const Fixed& a)
{
	return (Fixed(toFloat() + a.toFloat()));
}

Fixed Fixed::operator-(const Fixed& a)
{
	return (Fixed(toFloat() - a.toFloat()));
}

Fixed Fixed::operator*(const Fixed& a)
{
	return (Fixed(toFloat() * a.toFloat()));
}

Fixed Fixed::operator/(const Fixed& a)
{
	return (Fixed(toFloat() / a.toFloat()));
}

//    comparison

bool Fixed::operator>(const Fixed& a)
{
	return (toFloat() > a.toFloat());
}

bool Fixed::operator>=(const Fixed& a)
{
	return (toFloat() >= a.toFloat());
}

bool Fixed::operator<(const Fixed& a)
{
	return (toFloat() < a.toFloat());
}

bool Fixed::operator<=(const Fixed& a)
{
	return (toFloat() <= a.toFloat());
}

bool Fixed::operator==(const Fixed& a)
{
	return (toFloat() == a.toFloat());
}

bool Fixed::operator!=(const Fixed& a)
{
	return (toFloat() != a.toFloat());
}

//    increment / decrement

Fixed& Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

// others

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
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

int Fixed::toInt(void) const
{
	return (this->_fixed_point >> this->_nb_frac_bit);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixed_point) / (1 << this->_nb_frac_bit));
}
