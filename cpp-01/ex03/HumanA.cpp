/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:09 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:04:08 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    
};

HumanA::~HumanA(void)
{
    
};

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
