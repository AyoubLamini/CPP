/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:43:25 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:51:47 by alamini          ###   ########.fr       */
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
bool is_Number(const std::string& str, int index)
{
    if (index != 3 && index != 5)
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

