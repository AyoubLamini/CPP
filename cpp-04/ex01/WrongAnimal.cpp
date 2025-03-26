/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:24:13 by alamini           #+#    #+#             */
/*   Updated: 2025/03/11 14:06:53 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "WrongPuppy" ) {
    std::cout << "{WrongAnimal} constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "{WrongAnimal} destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->type = rhs.type;
    }
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makes some Sound" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return (this->type);
}