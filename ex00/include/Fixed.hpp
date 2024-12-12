/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:48:47 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 13:29:13 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int rawBits;
		const static int fractionalBits;
	public:
		Fixed();
		Fixed(const Fixed& origin);
		~Fixed();
		Fixed& operator=(const Fixed &origin);
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

#endif





