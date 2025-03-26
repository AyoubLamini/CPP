/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:59:08 by alamini           #+#    #+#             */
/*   Updated: 2025/03/15 14:23:58 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{ 
    // Animal abstractAnimal; // we cant make abstract animal instance
    // instead do this
    
    Animal *StillAnimal = new Dog();

    std::cout << StillAnimal->getType() << std::endl;

    
}