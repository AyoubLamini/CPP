/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:44:34 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:16:43 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void write_field(const std::string& field);
void fill_contact(PhoneBook &The_phonebook);
void fill_field(std::string &field, std::string message);
#endif