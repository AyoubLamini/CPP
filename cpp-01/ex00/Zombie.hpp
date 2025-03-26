/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:48:33 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 15:30:17 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce( void );  
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif

