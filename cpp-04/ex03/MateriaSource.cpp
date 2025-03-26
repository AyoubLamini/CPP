/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:59:25 by alamini           #+#    #+#             */
/*   Updated: 2025/03/18 15:03:05 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs )
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = rhs.materias[i];
    }
    return *this;
}

void    MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++)
        if (materias[i] == NULL)
        {
            materias[i] = m;
            // std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    // std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
    for ( int i = 0; i < 4; i++ )
        if ( materias[i] && materias[i]->getType() == type )
            return materias[i]->clone();
    return NULL;
}