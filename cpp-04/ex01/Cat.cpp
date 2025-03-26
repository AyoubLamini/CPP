/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:05:34 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 15:52:58 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "a new Cat >.< is born!" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
    std::cout << "Cat copy constructor is called" << std::endl;
    *this = rhs;
}

Cat& Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat copy assignment operator is called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        delete  this->brain;
        this->brain = new Brain( *rhs.brain );
    }
    return (*this);
}

Cat::~Cat()
{
    delete  this->brain;
    std::cout << "The cat is dead (✖﹏✖)" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow!" << std::endl;
}