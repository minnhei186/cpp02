
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:32 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 15:19:52 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : rawBits(0)
{}

Fixed::Fixed(int i):rawBits(i<<fractionalBits)
{}

Fixed::Fixed(float f_i):rawBits(roundf(f_i*(1<<fractionalBits)))
{}


Fixed::Fixed(const Fixed& origin)
{
	*this=origin;
}

Fixed::~Fixed()
{}


Fixed& Fixed::operator=(const Fixed& origin)
{
	if (this != &origin)
	{

		this->rawBits= origin.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const 
{
	return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits=raw;
}


//convertor

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


//compar_operator

bool Fixed::operator>(const Fixed& origin)const
{
	return this->getRawBits()>origin.getRawBits();
}

bool Fixed::operator<(const Fixed& origin)const
{
	return this->getRawBits()<origin.getRawBits();
}

bool Fixed::operator>=(const Fixed& origin)const
{
	return this->getRawBits()>=origin.getRawBits();
}

bool Fixed::operator<=(const Fixed& origin)const
{
	return this->getRawBits()<=origin.getRawBits();
}

bool Fixed::operator==(const Fixed& origin)const
{
	return this->getRawBits()==origin.getRawBits();
}

bool Fixed::operator!=(const Fixed& origin)const
{
	return this->getRawBits()!=origin.getRawBits();
}

//arithmetic_operators 


Fixed Fixed::operator+(const Fixed& origin)const
{
	return	Fixed(this->toFloat()+origin.toFloat());
}

Fixed Fixed::operator-(const Fixed& origin)const
{
	return	Fixed(this->toFloat()-origin.toFloat());
}

Fixed Fixed::operator*(const Fixed& origin)const
{
	return	Fixed(this->toFloat()*origin.toFloat());
}

Fixed Fixed::operator/(const Fixed& origin)const
{
	if(origin.toFloat()==0)
	{
		std::cout<<"Invalid 0 /"<<std::endl;
		exit(EXIT_FAILURE);
	}
	return	Fixed(this->toFloat()/origin.toFloat());
}


//increment_decrement

Fixed& Fixed::operator++(void)
{
	int tmp;

	tmp=this->rawBits;
	++this->rawBits;
	if(tmp>this->rawBits)
	{
		std::cout<<"Overflow"<<std::endl;
		exit(EXIT_FAILURE);
	}
	return *this;
}

//後置は一時メモリによって表現している。非常に面白い
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp.rawBits=this->rawBits++;
	if(tmp.rawBits>this->rawBits)
	{
		std::cout<<"Overflow"<<std::endl;
		exit(EXIT_FAILURE);
	}
	return tmp;
}


Fixed& Fixed::operator--(void)
{
	int tmp;
	tmp=this->rawBits;
	--this->rawBits;
	if(tmp<this->rawBits)
	{
		std::cout<<"Underflow"<<std::endl;
		exit(EXIT_FAILURE);
	}
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp.rawBits=this->rawBits--;
	if(tmp.rawBits<this->rawBits)
	{
		std::cout<<"Underflow"<<std::endl;
		exit(EXIT_FAILURE);
	}
	return tmp;
}

//max_min
Fixed& Fixed::min(Fixed& a,Fixed& b)
{
	if(a.getRawBits()<b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
	if(a.getRawBits()<b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a,Fixed& b)
{
	if(a.getRawBits()>b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b)
{
	if(a.getRawBits()>b.getRawBits())
		return a;
	return b;
}
























