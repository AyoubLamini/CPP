/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:44:34 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:38:54 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void write_field(const std::string& field);
bool is_Number(const std::string& str, int index);
bool isOnlyWhitespace(const std::string& str);
bool containsNonPrintable(const std::string& str);
#endif