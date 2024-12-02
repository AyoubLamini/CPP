/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 22:13:31 by alamini           #+#    #+#             */
/*   Updated: 2024/12/02 19:37:10 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}
Contact::~Contact()
{
    
}

void Contact::set_contact(std::string firstname, std::string lastname, std::string nickname,
        std::string phonenumber, std::string darkestsecret)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
    this->phonenumber = phonenumber;
    this->darkestsecret = darkestsecret;
}

void Contact::get_all_contacts(int num_of_contacts)
{
    num_of_contacts = 5;
    std::cout << "┌------------------------------------------------------┐" << std::endl;
    std::cout << "     Index" << "|" << "First Name" << "|" << " Last Name" << "|" << "  Nickname" << "|" << " Phone Num";
    std::cout << std::endl;
    std::cout << "├------------------------------------------------------┤" << std::endl;
    write_value("0");
    std::cout << "|";
    write_value(this->firstname);
    std::cout << "|";
    write_value(this->lastname);
    std::cout << "|";
    write_value(this->nickname);
    std::cout << "|";
    write_value(this->phonenumber);
    std::cout << std::endl;
    std::cout << "└------------------------------------------------------┘" << std::endl;
}
 
void write_value(std::string field)
{
    for (unsigned long i = 0; i < (10 - field.length()); i++)
        std::cout << ' ';
    std::cout << field; 
}

