/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:32 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/26 14:43:55 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBit(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int i):rawBit(i<<fractionalBit)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(float f_i):rawBit(roundf(f_i*(1<<fractionalBit)))
{
	std::cout<<"Float constructor called"<<std::endl;
}


Fixed::Fixed(const Fixed& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this=origin;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator=(const Fixed& origin)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &origin)
	{

		this->rawBit= origin.getRawBit();
	}
	return (*this);
}

int Fixed::getRawBit(void) const 
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->rawBit;
}

void Fixed::setRawBit(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->rawBit=raw;
}

int Fixed::toInt(void)const
{
	return this->rawBit>>this->fractionalBit;
}

float Fixed::toFloat(void)const
{
	return float(this->rawBit)/(1<<this->fractionalBit);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return o;
}















