/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:32 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/25 16:21:36 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBit(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this=origin;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator=(Fixed& origin)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &origin)
	{

		this->rawBit= origin.getRawBit();
	}
	return (*this);
}

int Fixed::getRawBit(void)
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->rawBit;
}

void Fixed::setRawBit(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->rawBit=raw;
}


