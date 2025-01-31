/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:43:25 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:15:39 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip> 

void write_field(const std::string& field) {
    if (field.length() > 10)
        std::cout << field.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << field;
}

// check if string containers at least a non digit
bool is_Number(const std::string& str, const std::string& msg)
{
    if (msg != "phone number: " && msg != "Enter an index: ")
        return (true);
    for (size_t i = 0; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

// check if string contains spaces only
bool isOnlyWhitespace(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (!std::isspace(str[i])) {
            return false;
        }
    }
    return true;
}
// chek if string contains at least one non printable char
bool containsNonPrintable(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isprint(str[i])) {  
            return true;
        }
    }
    return false;
} 

void fill_field(std::string &field, std::string message)
{
    do
    {
        std::cout << message;
        std::getline(std::cin, field);
        if (std::cin.eof())
            exit(0);
    }
    while (field.empty() || isOnlyWhitespace(field) || containsNonPrintable(field) || !is_Number(field, message)) ;
}
void fill_contact(PhoneBook &The_phonebook)
{
    Contact     new_contact;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

    fill_field(FirstName, "first name: ");
    fill_field(LastName, "last name: ");
    fill_field(NickName, "nickname: ");
    fill_field(PhoneNumber, "phone number: ");
    fill_field(DarkestSecret, "darkest secret: ");
    new_contact.set_attributes(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
    The_phonebook.add_contact(new_contact);
}
