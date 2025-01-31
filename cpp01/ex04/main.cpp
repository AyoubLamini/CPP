/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:34:12 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 23:25:30 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (1);
    }
    else
    {
        Sed mySed = Sed(av[1]);
        mySed.replace(av[2], av[3]);
    }
    
}