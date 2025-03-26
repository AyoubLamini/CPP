/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:59:05 by alamini           #+#    #+#             */
/*   Updated: 2025/03/09 16:28:11 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    this->type = "puppy";
    std::cout << "[Animal] constructor is called!" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "[Animal] copy constructor is called!" << std::endl;
    *this = rhs;
}

Animal& Animal::operator=(const Animal &rhs)
{
    std::cout << "[Animal] copy assignment operator is called!" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "[Animal] destructor is called" << std::endl;
}

void Animal::makeSound() const 
{
    std::cout << "[Animal] is making a sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}