/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:45:30 by alamini           #+#    #+#             */
/*   Updated: 2025/02/15 11:33:06 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
    
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
    
}

Point::Point(const Point &rhs) : _x(rhs._x), _y(rhs._y) 
{

}

Point& Point::operator=(const Point &rhs)
{  
    if (this != &rhs) 
    {
        // Copy assignment operator required by OCF,
        // but const members cannot be reassigned.
    }
    return *this;
}

Fixed Point::getX( void ) const 
{
    return this->_x;
}

Fixed Point::getY( void ) const 
{
    return this->_y;
}


Point::~Point()
{
    
}