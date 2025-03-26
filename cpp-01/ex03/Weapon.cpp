/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:27:42 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:05:20 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
};

Weapon::~Weapon(void)
{
    
};

const std::string& Weapon::getType(void)
{
    return (_type);
};

void Weapon::setType(std::string type)
{
    _type = type;
}