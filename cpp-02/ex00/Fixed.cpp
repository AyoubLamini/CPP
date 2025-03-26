/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:35:25 by alamini           #+#    #+#             */
/*   Updated: 2025/02/15 14:11:22 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPointValue = rhs.getRawBits();
    // *this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        this->fixedPointValue = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPointValue = raw;
}