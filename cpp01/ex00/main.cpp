/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:38:40 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 15:58:35 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Zombie 3");
    randomChump("Zombie 1");
    randomChump("Zombie 2");
    
    zombie->announce();
    delete zombie;
}