/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:52 by alamini           #+#    #+#             */
/*   Updated: 2025/02/14 20:56:15 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &rhs)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs; // Calls copy assigmenet operator, (shallow copy) copies rhs members into this, not needed we dont have deep copy in copy assignment operator
}

Fixed::Fixed(const int _integer)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = _integer << fractionalBits;
}

Fixed::Fixed(const float _float)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(_float * (1 << fractionalBits));
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
//    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        this->fixedPointValue = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (this->fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPointValue = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->fixedPointValue >> fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & fixed ) {
    o << fixed.toFloat();
    return o;
}
// Comparisons
bool Fixed::operator>(const Fixed &rhs) const
{
    return (this->fixedPointValue > rhs.fixedPointValue);
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return (this->fixedPointValue < rhs.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return (this->fixedPointValue >= rhs.fixedPointValue);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return (this->fixedPointValue <= rhs.fixedPointValue);
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return (this->fixedPointValue == rhs.fixedPointValue);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return (this->fixedPointValue != rhs.fixedPointValue);
}

// Operations

Fixed Fixed::operator+(const Fixed &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

// Increment / Decrement

Fixed &Fixed::operator++(void)
{
    ++this->fixedPointValue;
    return (*this);
}

Fixed Fixed::operator++(int) 
{ 
    Fixed temp = *this; 
    ++this->fixedPointValue;
    return temp;
}

Fixed &Fixed::operator--(void)
{
    --this->fixedPointValue;
    return (*this);
}

Fixed Fixed::operator--(int) 
{ 
    Fixed temp = *this; 
    --this->fixedPointValue;
    return temp;
}

// min - max

Fixed& Fixed::min(Fixed &a, Fixed &b) 
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}