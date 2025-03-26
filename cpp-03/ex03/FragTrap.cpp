/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:23:58 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 16:17:05 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Frag-Trap Default constructor is called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "[ FragTrap ] - " << this->_name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
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

FragTrap::~FragTrap()
{
    std::cout << "[ FragTrap ] - " << this->_name << " destructed." << std::endl;
}

void    FragTrap::highFive( void ) {
    if (this->_hitPoints < 1)
    {
        std::cout << "[ FragTrap ] - " << this->_name << " is deactivated (out of hit points)" << std::endl;
        return;
    }
    if ( this->_energyPoints < 1 ) {
        std::cout << "[ FragTrap ] - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "[ FragTrap ] - " << this->_name << " High five, guys! ." << std::endl;
    this->_energyPoints -= 1;
}