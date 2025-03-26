/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:25:44 by alamini           #+#    #+#             */
/*   Updated: 2025/03/18 15:12:26 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
    
}

Character::Character(std::string const &name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    // std::cout << "Character " <<  this->_name << " is created" << std::endl;
}

Character::Character( Character const & src ) : _name(src._name)
{
    *this = src;
    // std::cout << "copy of Character " << this->_name << " is created" << std::endl;
}

Character& Character::operator=( Character const & rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = rhs._inventory[i];
    }
    return *this;
}

Character::~Character()
{
    // std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            // std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip( int idx ) {
    if (this->_inventory[idx])
    {
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
        // std::cout << "Character " << this->_name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void    Character::use( int idx, ICharacter& target ) {
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        // std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const& Character::getName() const {
    return this->_name;
}