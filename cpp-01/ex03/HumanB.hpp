/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:18 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:04:22 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"



class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
        
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void) const;
        void setWeapon(const Weapon &weapon);
};


#endif