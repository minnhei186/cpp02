/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:48:47 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/25 16:21:52 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define F_FILED 8

#include <string>
#include <iostream>

class Fixed
{
	private:
		int rawBit;
		const static int fractionalBits=F_FILED;
	public:
		Fixed();
		Fixed(Fixed& origin);
		~Fixed();
		Fixed& operator=(Fixed &origin);
		int getRawBit(void);
		void setRawBit(int const raw);
};

#endif





