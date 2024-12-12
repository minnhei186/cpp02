/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:14:34 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/12 15:48:03 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << "Basic Constructors and Conversion " << std::endl;
        Fixed a;                 
        Fixed b(10);            
        Fixed c(42.42f);        
        Fixed d(b);             

        a = Fixed(1234.4321f);   

        std::cout << "a is " << a << std::endl;
        std::cout << "b is " << b << std::endl;
        std::cout << "c is " << c << std::endl;
        std::cout << "d is " << d << std::endl;

        std::cout << "a is " << a.toInt() << " as integer" << std::endl;
        std::cout << "b is " << b.toInt() << " as integer" << std::endl;
        std::cout << "c is " << c.toInt() << " as integer" << std::endl;
        std::cout << "c is " << c.toFloat() << " as float" << std::endl;
        std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    }

    std::cout << std::endl;
    {
        std::cout << "Comparison Operators" << std::endl;
        Fixed x(10);
        Fixed y(10);
        Fixed z(20);

        std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;

        std::cout << "x == y ? " << (x == y) << std::endl;
        std::cout << "x != y ? " << (x != y) << std::endl;
        std::cout << "x <  z ? " << (x < z) << std::endl;
        std::cout << "x <= y ? " << (x <= y) << std::endl;
        std::cout << "z >  x ? " << (z > x) << std::endl;
        std::cout << "z >= y ? " << (z >= y) << std::endl;
    }

    std::cout << std::endl;
    {
        std::cout << "Arithmetic Operators" << std::endl;
        Fixed f1(10.05f);
        Fixed f2(2);
        Fixed sum = f1 + f2;
        Fixed diff = f1 - f2;
        Fixed mul = f1 * f2;
        Fixed div = f1 / f2;

        std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
        std::cout << "f1 + f2 = " << sum << std::endl;
        std::cout << "f1 - f2 = " << diff << std::endl;
        std::cout << "f1 * f2 = " << mul << std::endl;
        std::cout << "f1 / f2 = " << div << std::endl;

        // Fixed zero(0);
    }

    std::cout << std::endl;
    {
        std::cout << "Increment and Decrement" << std::endl;
        Fixed g;
        std::cout << "g = " << g << std::endl;
        std::cout << "++g = " << ++g << std::endl; //pre
        std::cout << "g = " << g << std::endl;
        std::cout << "g++ = " << g++ << std::endl; // post
        std::cout << "g = " << g << std::endl;

        std::cout << "--g = " << --g << std::endl; // pre
        std::cout << "g = " << g << std::endl;
        std::cout << "g-- = " << g-- << std::endl; // post
        std::cout << "g = " << g << std::endl;
    }

    std::cout << std::endl;
    {
        std::cout << "Min and Max" << std::endl;
        Fixed a(-1.0f);
        Fixed b(1.0f);
        std::cout << "a = " << a << ", b = " << b << std::endl;

        std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
        std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

        const Fixed c(42.42f);
        const Fixed d(45.0f);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
        std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
    }

    return 0;
}

