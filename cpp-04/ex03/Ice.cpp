/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:47:46 by alamini           #+#    #+#             */
/*   Updated: 2025/03/18 14:44:10 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "* Ice: materia is created *" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
    *this = src;
    // std::cout << "* Ice: materia is copied *" << std::endl;
}

Ice&   Ice::operator=( const Ice& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Ice::~Ice()
{
    // std::cout << "* Ice: ice is destroyed *" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}