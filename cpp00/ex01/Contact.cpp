/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:21:23 by alamini           #+#    #+#             */
/*   Updated: 2024/12/13 01:27:07 by alamini          ###   ########.fr       */
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

void Contact::set_attributes(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}

void Contact::display_contact_principal(int index)
{
    std::cout << "         " << index;
    std::cout << "|";
    write_field(this->FirstName);
    std::cout << "|";
    write_field(this->LastName);
    std::cout << "|";
    write_field(this->NickName);
    std::cout << "|" << std::endl;
}

void Contact::display_contact()
{
    std::cout << "First mame: " << this->FirstName << std::endl;
    std::cout << "Last mame: " << this->LastName << std::endl;
    std::cout << "Nickname: " << this->NickName << std::endl;
    std::cout << "Phone number: " << this->PhoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->DarkestSecret << std::endl;
   
}

