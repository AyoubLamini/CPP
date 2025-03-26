/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:10:15 by alamini           #+#    #+#             */
/*   Updated: 2025/03/09 15:08:05 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& rhs);
        Dog& operator=(const Dog &rhs);
        ~Dog();

        void makeSound() const;
};

#endif