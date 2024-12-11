/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:48:47 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/11 10:56:38 by hosokawa         ###   ########.fr       */
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
		int rawBit;
		const static int fractionalBit;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f_i);
		Fixed(const Fixed& origin);
		Fixed& operator=(const Fixed &origin);
		~Fixed();
		int getRawBit(void)const ;
		void setRawBit(int const raw);

		//converter
		int toInt(void)const;
		float toFloat(void)const;

		//operator
		bool operator>(const Fixed &origin)const;
		bool operator<(const Fixed &origin)const;
		bool operator>=(const Fixed &origin)const;
		bool operator<=(const Fixed &origin)const;
		bool operator==(const Fixed &origin)const;
		bool operator!=(const Fixed &origin)const;

		Fixed operator+(const Fixed &origin)const;
		Fixed operator-(const Fixed &origin)const;
		Fixed operator*(const Fixed &origin)const;
		Fixed operator/(const Fixed &origin)const;

		Fixed& operator++(void);//pre
		Fixed operator++(int);//post
		Fixed& operator--(void);//pre
		Fixed operator--(int);//post

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif





