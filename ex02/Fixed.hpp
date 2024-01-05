/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:58 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/03 13:44:02 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& copy);
		~Fixed();
		
		Fixed& operator=(const Fixed& copy);
		Fixed operator+(const Fixed& a);
		Fixed operator-(const Fixed& a);
		Fixed operator*(const Fixed& a);
		Fixed operator/(const Fixed& a);
		
		bool operator>(const Fixed& a);
		bool operator>=(const Fixed& a);
		bool operator<(const Fixed& a);
		bool operator<=(const Fixed& a);
		bool operator==(const Fixed& a);
		bool operator!=(const Fixed& a);

		Fixed& operator++();
		Fixed operator++(int);
		
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
		int getRawBits(void) const ;
		void setRawBits(int const raw);
		float toFloat (void) const;
		int toInt(void) const;
		
	private:
		int _fixed_point;
		static const int _nb_frac_bit = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif