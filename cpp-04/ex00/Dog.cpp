/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:05:31 by alamini           #+#    #+#             */
/*   Updated: 2025/03/11 16:28:52 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "new Dog \"ᴥ\" in town!" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
    std::cout << "Dog copy constructor is called" << std::endl;
    *this = rhs;
}

Dog& Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog copy assignment operator is called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "The Dog is dead x_x" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
