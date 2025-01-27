/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:22:24 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 19:37:48 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& getType(void);
        void setType(std::string type);
};


#endif