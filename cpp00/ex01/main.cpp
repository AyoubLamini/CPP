/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:53:15 by alamini           #+#    #+#             */
/*   Updated: 2024/12/14 23:44:40 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc, char **argv)
{
    PhoneBook The_Phonebook;
    std::string command;
    std::string index;
    (void)argv;

    if (argc > 1)
    {
        std::cout << "This program Doesnt need arguments !!" << std::endl;
        return 1;
    }
    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
        std::cout << "> ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
        if (command == "ADD")
        {
            fill_contact(The_Phonebook);
        }
        else if (command == "SEARCH")
        {
            if (!The_Phonebook.display_phonebook())
            {
                fill_field(index, "Enter an index: ");
                The_Phonebook.search_contact(index);
            }
        }
        else if (command == "EXIT")
            break;
    }
    return 0;
}