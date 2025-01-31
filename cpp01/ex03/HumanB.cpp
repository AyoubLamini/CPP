/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:16 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:04:55 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
};

HumanB::~HumanB(void)
{
    
};

void HumanB::attack(void) const
{
    if (_weapon == NULL)
        std::cout << _name << " Doesn't have a weapon" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
    _weapon = (Weapon *)&weapon;
}
