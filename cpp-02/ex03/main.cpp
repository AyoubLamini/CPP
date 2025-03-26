/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:56:48 by alamini           #+#    #+#             */
/*   Updated: 2025/02/15 14:29:48 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {

    Point a(0, 4);
    Point b(0, 0);
    Point c(4, 0);

    
    Point vertexPoint(0, 0);
    std::cout << "On vertex: " << (bsp(a, b, c, vertexPoint) ? "Inside" : "Outside") << std::endl;


    Point edgePoint(1.5f, 2.5f);
    std::cout << "On edge: " << (bsp(a, b, c, edgePoint) ? "Inside" : "Outside") << std::endl;


    Point insidePoint(2.1f, 1.8f);
    std::cout << "Inside: " << (bsp(a, b, c, insidePoint) ? "Inside" : "Outside") << std::endl;


    Point outsidePoint(2.1f, 3);
    std::cout << "Outside: " << (bsp(a, b, c, outsidePoint) ? "Inside" : "Outside") << std::endl;

    return 0;
}


    
