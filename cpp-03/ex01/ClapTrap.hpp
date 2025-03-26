/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:26 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 14:32:59 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        
        ClapTrap();
    public:
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &rhs);
        ClapTrap& operator=(const ClapTrap &rhs);
        ~ClapTrap();

       void attack(const std::string& target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);
};



#endif