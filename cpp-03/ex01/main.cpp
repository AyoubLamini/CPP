/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:38 by alamini           #+#    #+#             */
/*   Updated: 2025/03/04 14:33:31 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Root");
    ClapTrap b("User");
    a.attack("User");
    b.beRepaired(20);


    ScavTrap A("Scavii");
    ScavTrap B("Hello");
    
    A.attack("enemy 1");
    B = A;
    ScavTrap C(B);
    B = A;

    A.guardGate();

    A.attack("Clappy");
    A.ClapTrap::attack("Jim");
}