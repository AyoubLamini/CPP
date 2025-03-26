/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:25:38 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 16:11:50 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;

    DiamondTrap();
public:
    DiamondTrap( std::string name );
    DiamondTrap(const DiamondTrap &rhs);
    DiamondTrap& operator=(const DiamondTrap &rhs);
    ~DiamondTrap();

    using   ScavTrap::attack;
    void    whoAmI( void );
};

#endif 