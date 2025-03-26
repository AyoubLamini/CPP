/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:26:56 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 15:52:28 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& rhs )
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = rhs;
}

Brain& Brain::operator=( const Brain& rhs )
{
    std::cout << "Brain copy operator assignment called." << std::endl;
    if ( this != &rhs ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}