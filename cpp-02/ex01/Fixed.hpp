/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:22 by alamini           #+#    #+#             */
/*   Updated: 2025/02/14 16:27:14 by alamini          ###   ########.fr       */
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
};

std::ostream & operator<<( std::ostream & o, Fixed const & fixed );


#endif