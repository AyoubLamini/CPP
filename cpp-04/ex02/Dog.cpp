/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:05:31 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 15:56:30 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "new Dog \"ᴥ\" in town!" << std::endl;
    this->brain = new Brain();
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
        delete  this->brain;
        this->brain = new Brain( *rhs.brain );
    }
    return (*this);
}

Dog::~Dog()
{
    delete  this->brain;
    std::cout << "The Dog is dead x_x" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
