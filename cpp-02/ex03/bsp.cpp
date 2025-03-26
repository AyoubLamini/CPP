/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:52:46 by alamini           #+#    #+#             */
/*   Updated: 2025/02/15 12:37:35 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed   abs(Fixed x)
{
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed   area( Point const a, Point const b, Point const c )
{
    return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) +
             ( b.getX() * ( c.getY() - a.getY() ) ) +
             ( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   areaABC = abs(area( a, b, c ));
    Fixed   areaPAB = abs(area( point, a, b ));
    Fixed   areaPBC = abs(area( point, b, c ));
    Fixed   areaPCA = abs(area( point, c, a ));

    return  ( (areaABC == areaPAB + areaPBC + areaPCA) && (areaPAB > 0 && areaPBC > 0 && areaPCA > 0) );
}