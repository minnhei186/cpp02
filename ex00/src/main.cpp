/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:14:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/25 15:21:01 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
  	Fixed b( a );
  	Fixed c;

	c = b;
 	std::cout << a.getRawBit() << std::endl;
 	std::cout << b.getRawBit() << std::endl;
 	std::cout << c.getRawBit() << std::endl;

	return (0);

}
