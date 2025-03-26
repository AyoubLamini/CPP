/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:09:33 by alamini           #+#    #+#             */
/*   Updated: 2025/03/09 15:32:13 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& rhs);
        Cat& operator=(const Cat &rhs);
        ~Cat();

        void makeSound() const;
};

#endif