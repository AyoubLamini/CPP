/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:38 by alamini           #+#    #+#             */
/*   Updated: 2025/03/04 14:32:07 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap A("Scavii");
    A.attack("Clappy");

    FragTrap K("Frog");
    FragTrap P("Duck");
    FragTrap Dude("Dude");
    Dude.highFive();
    Dude.attack("Scavii");
    Dude.beRepaired(20);
    Dude.takeDamage(160);
}