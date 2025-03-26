/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:42:37 by alamini           #+#    #+#             */
/*   Updated: 2025/02/15 14:24:04 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;
        
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &rhs);
        Point& operator=(const Point &rhs);
        ~Point();

        Fixed getY( void ) const;
        Fixed getX( void ) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );


#endif