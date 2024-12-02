/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:08:16 by alamini           #+#    #+#             */
/*   Updated: 2024/11/26 00:08:17 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int uppercase_str(int argc, char **argv)
{
    for (int j = 1; j < argc; j++)
    {
        std::string str = argv[j];
        for (size_t i = 0; i < str.length(); i++)
            std::cout << (char)toupper(str[i]);
        std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}

int main(int argc, char **argv)
{
    if (argc < 2) 
       return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
    uppercase_str(argc, argv);
    return (0); 
}