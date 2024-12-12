/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:14:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 13:24:44 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
  	Fixed b( a );
  	Fixed c;

	c = b;
 	std::cout << a.getRawBits() << std::endl;
 	std::cout << b.getRawBits() << std::endl;
 	std::cout << c.getRawBits() << std::endl;

	return (0);

}
