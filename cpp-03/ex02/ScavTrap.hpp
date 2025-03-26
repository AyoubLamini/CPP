/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:58:17 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 14:20:44 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    private:
        ScavTrap();

    public:
        ScavTrap( std::string name );
        ~ScavTrap();
        ScavTrap(const ScavTrap &rhs);
        ScavTrap& operator=(const ScavTrap &rhs);

    void    attack(std::string const& target);
    void    guardGate();
};



#endif