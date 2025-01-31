/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:21:23 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:37:25 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"

Contact::Contact()
{
    
};

Contact::~Contact()
{
    
};

void Contact::fill(std::string message, int index)
{
    std::string field;
    do
    {
        std::cout << message;
        std::getline(std::cin, field);
        if (std::cin.eof())
            exit(0);
    }
    while (field.empty() || isOnlyWhitespace(field) || containsNonPrintable(field) || !is_Number(field, index)) ;
    attributes[index] = field;
}

void Contact::display_contact_principal(int index)
{
    std::cout << "         " << index;
    std::cout << "|";
    write_field(attributes[0]);
    std::cout << "|";
    write_field(this->attributes[1]);
    std::cout << "|";
    write_field(this->attributes[2]);
    std::cout << "|" << std::endl;
}

void Contact::display_contact()
{
    std::cout << "First mame: " << attributes[0] << std::endl;
    std::cout << "Last mame: " << attributes[1] << std::endl;
    std::cout << "Nickname: " << attributes[2] << std::endl;
    std::cout << "Phone number: " << attributes[3] << std::endl;
    std::cout << "Darkest secret: " << attributes[4]<< std::endl;
   
}

