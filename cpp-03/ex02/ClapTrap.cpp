/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:31 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 14:41:32 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "Clap Trap Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << Name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
    *this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints < 1)
    {
        std::cout << "ClapTrap " << this->_name << " is deactivated (out of hit points)" << std::endl;
        return;
    }
    if (this->_energyPoints < 1)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints < 1)
    {
        std::cout << "ClapTrap " << this->_name << " is deactivated (out of hit points)" << std::endl;
        return;
    }
    if (this->_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " dammage " << std::endl;
    this->_hitPoints -= amount;
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints < 1)
    {
        std::cout << "ClapTrap " << this->_name << " is deactivated (out of hit points)" << std::endl;
        return;
    }
    if (this->_energyPoints < 1)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points " << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
    
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap is destroyed" << std::endl;
}