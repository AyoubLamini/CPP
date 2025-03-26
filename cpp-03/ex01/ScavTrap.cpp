/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:58:11 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 16:16:28 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Scav-Trap Default constructor is called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "< ScavTrap > - " << this->_name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "< ScavTrap > - " << this->_name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if (this->_hitPoints < 1)
    {
        std::cout << "< ScavTrap > - " << this->_name << " is deactivated (out of hit points)" << std::endl;
        return;
    }
    if ( this->_energyPoints < 1 ) {
        std::cout << "< ScavTrap > - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}