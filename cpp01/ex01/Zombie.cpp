/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:11:53 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 17:12:38 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

};

Zombie::~Zombie(void)
{
     std::cout << name << " : Destroyed" << std::endl
    ;
};

void Zombie::setName(std::string name)
{
    this->name = name;
};

void Zombie::announce(void)
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl
    ; 
}
