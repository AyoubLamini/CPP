/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:59:03 by alamini           #+#    #+#             */
/*   Updated: 2025/03/15 14:18:41 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal& rhs);
        Animal& operator=(const Animal &rhs);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif