/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:59:08 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 14:52:50 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();



const WrongAnimal* Y = new WrongAnimal();
const WrongAnimal* X = new WrongCat();

std::cout << Y->getType() << " " << std::endl;
std::cout << X->getType() << " " << std::endl;

Y->makeSound();
X->makeSound();


Animal* Creature = new Dog();
Creature->makeSound();

delete Creature;
Creature = new Cat();
Creature->makeSound();

delete Creature;
delete meta;
delete j;
delete i;
delete X;
delete Y;


return 0;
}