/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:35:28 by alamini           #+#    #+#             */
/*   Updated: 2025/02/10 17:00:42 by alamini          ###   ########.fr       */
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
        Fixed(const Fixed &rhs);
        Fixed& operator=(const Fixed &rhs);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif