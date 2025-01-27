/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:48:29 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 15:30:12 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
};

Zombie::~Zombie(void)
{
    
};

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl
    ; 
}