/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:05:34 by alamini           #+#    #+#             */
/*   Updated: 2025/03/11 16:30:06 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "a new Cat >.< is born!" << std::endl;
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
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "The cat is dead (✖﹏✖)" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow!" << std::endl;
}