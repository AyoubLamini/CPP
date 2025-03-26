/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:25:35 by alamini           #+#    #+#             */
/*   Updated: 2025/03/04 14:26:00 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() 
{
    std::cout << "Diamond-Trap Default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs)
{
    std::cout << "Diamond-Trap Copy Constructor called" << std::endl;
    this->_name = rhs._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        this->_name = rhs._name;
    }
    return *this;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), FragTrap( name ), ScavTrap( name )
{
    // in Virtual inheritance, Intermediate Derived Classes (Scav and Frag) don´t construct Virtual Base class (Clap)
    // instead Most derived class (Diamond) is the one responsible for its construction.
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;

    std::cout << "# DiamondTrap # - " << this->_name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "# DiamondTrap # - " << this->_name << " is dead." << std::endl;
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap my name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}