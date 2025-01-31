/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:24:30 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:47:33 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
        int add_index;
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(Contact new_contact);
        int display_phonebook();
        void search_contact(const std::string &indexStr);
};

#endif