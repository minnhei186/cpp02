/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:32 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/11 11:04:34 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

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


//convertor

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


//compar_operator

bool Fixed::operator>(const Fixed& origin)const
{
	return this->getRawBit()>origin.getRawBit();
}

bool Fixed::operator<(const Fixed& origin)const
{
	return this->getRawBit()<origin.getRawBit();
}

bool Fixed::operator>=(const Fixed& origin)const
{
	return this->getRawBit()>=origin.getRawBit();
}

bool Fixed::operator<=(const Fixed& origin)const
{
	return this->getRawBit()<=origin.getRawBit();
}

bool Fixed::operator==(const Fixed& origin)const
{
	return this->getRawBit()==origin.getRawBit();
}

bool Fixed::operator!=(const Fixed& origin)const
{
	return this->getRawBit()!=origin.getRawBit();
}

//arithmetic_operators 


Fixed Fixed::operator+(const Fixed& origin)const
{
	return Fixed(this->toFloat+origin.toFloat);
}

Fixed Fixed::operator-(const Fixed& origin)const
{
	return Fixed(this->toFloat-origin.toFloat);
}

Fixed Fixed::operator*(const Fixed& origin)const
{
	return Fixed(this->toFloat*origin.toFloat);
}

Fixed Fixed::operator/(const Fixed& origin)const
{
	return Fixed(this->toFloat/origin.toFloat);
}


//increment_decrement

Fixed& Fixed::operator++(void)
{
	++this->rawBit;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp.rawBit=this->rawBit++;
	return tmp;
}


Fixed& Fixed::operator--(void)
{
	--this->rawBit;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp.rawBit=this->rawBit--;
	return tmp;
}

//max_min
































