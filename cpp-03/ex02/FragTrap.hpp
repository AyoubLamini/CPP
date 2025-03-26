/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:24:01 by alamini           #+#    #+#             */
/*   Updated: 2025/03/01 14:40:05 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap();

public:
    FragTrap( std::string name );
    ~FragTrap();
    FragTrap(const FragTrap &rhs);
    FragTrap& operator=(const FragTrap &rhs);

    void    highFive( void );
};



#endif