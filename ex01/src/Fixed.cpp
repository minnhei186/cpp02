/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:32 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 13:33:42 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits= 8;

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int i):rawBits(i<<fractionalBits)
{
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(float f_i):rawBits(roundf(f_i*(1<<fractionalBits)))
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

		this->rawBits= origin.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const 
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->rawBits=raw;
}

int Fixed::toInt(void)const
{
	return this->rawBits>>this->fractionalBits;
}

float Fixed::toFloat(void)const
{
	return float(this->rawBits)/(1<<this->fractionalBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return o;
}















