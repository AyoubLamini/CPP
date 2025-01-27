/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:11:46 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 17:04:56 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "N must be > 0 !!" << std::endl;
        return (NULL);
    }

    Zombie *zombieHorde;

    zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieHorde[i].setName(name);

    return (zombieHorde);
}