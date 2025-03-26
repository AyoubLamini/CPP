/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:17:49 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 18:56:14 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    private:
        std::string attributes[5];
    public:
        Contact();
        ~Contact();
        void fill(std::string message, int index);
        void display_contact_principal(int contact_count);
        void display_contact();
};

#endif