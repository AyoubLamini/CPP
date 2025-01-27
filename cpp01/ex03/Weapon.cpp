/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:27:42 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 19:38:16 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
};

Weapon::~Weapon(void)
{
    
};

const std::string& Weapon::getType(void)
{
    return (this->type);
};

void Weapon::setType(std::string type)
{
    this->type = type;
}