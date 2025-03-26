/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:14:11 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 15:57:25 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& rhs);
        Brain& operator=(const Brain &rhs);
        ~Brain();
};

#endif