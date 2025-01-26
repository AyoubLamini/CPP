/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:38:21 by alamini           #+#    #+#             */
/*   Updated: 2024/12/15 00:16:45 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    contact_count = 0;
    add_index = 0;
};
PhoneBook::~PhoneBook()
{
};

void PhoneBook::add_contact(Contact new_contact)
{
    if (this->add_index < 8)
    {
        this->contacts[this->add_index] = new_contact;
        this->add_index++;
        if (contact_count < 8)
            this->contact_count++;
    }
    else
    {
        this->add_index = 0;
        this->contacts[this->add_index] = new_contact;
        this->add_index++;
    }
}

int PhoneBook::display_phonebook()
{
    if (contact_count == 0)
        return (std::cout << "There are no saved contacts :(" << std::endl, 1);
    int i = 0;
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    while (i < this->contact_count)
    {
        this->contacts[i].display_contact_principal(i);
        i++;
    }
    return (0);
}

void PhoneBook::search_contact(std::string str)
{
    int index;

    index = atoi(str.c_str());
    if (index < 0 || index > 7)
        std::cout << "index out of range(0-7)" << std::endl;
    else if (index >= contact_count)
        std::cout << "no such contact with provided index" << std::endl;
    else
        contacts[index].display_contact();
}