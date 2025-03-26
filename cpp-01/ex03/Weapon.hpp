/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:24 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 21:05:06 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon
{
    private:
        std::string _type;
        
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& getType(void);
        void setType(std::string type);
};


#endif