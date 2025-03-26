/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:49:53 by alamini           #+#    #+#             */
/*   Updated: 2025/01/27 18:15:18 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string my_string = "HI THIS IS BRAIN";
    std::string *stringPTR = &my_string;
    std::string &stringREF = my_string;
    
    std::cout << "my_string address: " << &my_string << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl; 
    std::cout << "stringREF address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "my_string value: " << my_string << std::endl;
    std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl; 
    std::cout << "value pointed by stringREF: " << stringREF << std::endl; 
    
    return (0);
}