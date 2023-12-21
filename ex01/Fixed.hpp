/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:58 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/21 13:03:23 by larmenou         ###   ########.fr       */
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