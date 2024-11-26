/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:48:47 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/26 14:45:03 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define F_FILED 8

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int rawBit;
		const static int fractionalBit=F_FILED;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f_i);
		Fixed(const Fixed& origin);
		Fixed& operator=(const Fixed &origin);
		~Fixed();
		int getRawBit(void)const ;
		void setRawBit(int const raw);
		int toInt(void)const;
		float toFloat(void)const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif





