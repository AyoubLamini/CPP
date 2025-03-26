/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:04:45 by alamini           #+#    #+#             */
/*   Updated: 2025/03/22 13:57:10 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
class Ice : public AMateria
{
    protected:

    public:
        Ice();
        Ice(const Ice& rhs);
        Ice& operator=(const Ice &rhs);
        virtual ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif