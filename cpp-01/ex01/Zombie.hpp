/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:11:50 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 16:36:04 by alamini          ###   ########.fr       */
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
        Zombie(void);
        ~Zombie(void);
        void announce( void );
        void setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif