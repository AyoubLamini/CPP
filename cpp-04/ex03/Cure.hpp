/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:15:43 by alamini           #+#    #+#             */
/*   Updated: 2025/03/22 13:57:04 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
class Cure : public AMateria
{
    protected:
        
    public:
        Cure();
        Cure(const Cure& rhs);
        Cure& operator=(const Cure &rhs);
        virtual ~Cure();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif