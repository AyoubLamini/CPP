/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:58:17 by alamini           #+#    #+#             */
/*   Updated: 2025/03/03 13:26:31 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

    protected:
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