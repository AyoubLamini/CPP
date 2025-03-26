/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:53:15 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:56:46 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

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
            Contact newContact;
            newContact.fill("first name: ", 0);
            newContact.fill("last name: ", 1);
            newContact.fill("nickname: ", 2);
            newContact.fill("phone number: ", 3);
            newContact.fill("darkest secret: ", 4);
            The_Phonebook.add_contact(newContact);
        }
        else if (command == "SEARCH")
        {
            if (!The_Phonebook.display_phonebook())
            {
                do
                {
                    std::cout << "Enter an index: ";
                    std::getline(std::cin, index);
                    if (std::cin.eof())
                        exit(0);
                }
                while (index.empty() || isOnlyWhitespace(index) || containsNonPrintable(index) || !is_Number(index, 5)) ;
                The_Phonebook.search_contact(index);
            }
        }
        else if (command == "EXIT")
            break;
    }
    return 0;
}