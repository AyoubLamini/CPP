/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:22 by alamini           #+#    #+#             */
/*   Updated: 2025/02/14 20:55:55 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
        
    public:
        Fixed();
        Fixed(const int number);
        Fixed(const Fixed &rhs);
        Fixed(const float _float);
        Fixed& operator=(const Fixed &rhs);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        
        bool operator>(const Fixed &rhs)  const;
        bool operator<(const Fixed &rhs)  const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;

        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;
         
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed& a,  Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

        static Fixed& max( Fixed& a,  Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b); 
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed );


#endif