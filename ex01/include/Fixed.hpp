/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:48:47 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 13:32:39 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int rawBits;
		const static int fractionalBits;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f_i);
		Fixed(const Fixed& origin);
		Fixed& operator=(const Fixed &origin);
		~Fixed();
		int getRawBits(void)const ;
		void setRawBits(int const raw);
		int toInt(void)const;
		float toFloat(void)const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif





