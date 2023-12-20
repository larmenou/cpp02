/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:19:58 by larmenou          #+#    #+#             */
/*   Updated: 2023/12/12 10:00:34 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed& copy);
		~Fixed();
		Fixed& operator=(Fixed& copy);
		int getRawBits(void) const ;
		void setRawBits(int const raw);
		
	private:
		int _fixed_point;
		static const int _nb_frac_bit = 8;
};


#endif