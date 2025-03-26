/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:23:08 by alamini           #+#    #+#             */
/*   Updated: 2025/03/11 16:31:41 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
    std::cout << "a new WrongCat is born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs)
{
    std::cout << "WrongCat copy constructor is called" << std::endl;
    *this = rhs;
}
WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat copy assignment operator is called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

WrongCat::~WrongCat( void )
{
    std::cout << "The WrongCat is dead" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow!" << std::endl;
}
