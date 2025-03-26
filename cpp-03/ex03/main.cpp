/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:38 by alamini           #+#    #+#             */
/*   Updated: 2025/03/04 14:31:18 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
     DiamondTrap object("Root");
     object.FragTrap::highFive();
     object.ClapTrap::beRepaired(5);
     object.FragTrap::ClapTrap::beRepaired(20);
     object.FragTrap::ClapTrap::attack("Ben");
     object.attack("Ben");
     object.beRepaired(5);
     object.whoAmI();
     object.attack("User");
     object.highFive();
    DiamondTrap A("Wild");
    DiamondTrap B("Jenna");

    A = B;
    A.whoAmI();

}