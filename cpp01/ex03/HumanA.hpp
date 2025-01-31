/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:13 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:03:45 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;
        
    public:
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA(void);
        void attack(void) const;
};


#endif