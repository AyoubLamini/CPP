/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:59:08 by alamini           #+#    #+#             */
/*   Updated: 2025/03/13 15:57:14 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{ 
    Animal* array[100];

    for (int i = 0; i < 50; i++)
    {
        array[i] = new Cat();
    }
    for (int i = 50; i < 100; i++)
    {
        array[i] = new Dog();
    }
    // std::cout << array[0]->getType() << std::endl;
    for (int i = 0; i < 100; i++)
    {
        delete array[i];
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    // Cat Kitten;
    // Dog Puppy;

    // Brain *holder;

    // holder = Puppy.brain;
    // Kitten.brain->ideas[0] = "we are clean and cute unlike dogs";
    // Kitten.brain->ideas[1] = "we are favourite to humans";

    // Puppy.brain->ideas[0] = "we are loyal, everyone knows that";
    // Puppy.brain->ideas[1] = "we protect and keep human safe";

    // std::cout << "<-----Kitten------> : " << Kitten.brain->ideas[1] << std::endl; 
    
    // //Have you ever thought about what would happen if dogs and cats swapped brains
    // Puppy.brain = Kitten.brain;
    // Kitten.brain = holder;
    
    // std::cout << "<-----Kitten------> : " << Kitten.brain->ideas[1] << std::endl; 

    // Cat PussInBoots;
    // PussInBoots.brain->ideas[1] = "You are what you have always been: my brother.";

    // Kitten = PussInBoots;
    
    // std::cout << "<-----Kitten------> : " << Kitten.brain->ideas[1] << std::endl; 
}