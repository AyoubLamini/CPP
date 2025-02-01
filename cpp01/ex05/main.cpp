/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:37:18 by alamini           #+#    #+#             */
/*   Updated: 2025/02/01 17:22:13 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Harl;
    Harl.complain("error");
    Harl.complain("ERROR");
    Harl.complain("INFO");
    Harl.complain("err");

    return (0);
}