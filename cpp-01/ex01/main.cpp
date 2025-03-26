/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:11:55 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 18:15:53 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;

    N = 6;
    Zombie *WalkingDead = zombieHorde(N, "Undead");
    for(int i = 0; i < N; i++)
    {
        WalkingDead[i].announce();
    }
    delete[] WalkingDead;
    return (0);
}