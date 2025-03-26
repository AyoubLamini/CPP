/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:47:13 by alamini           #+#    #+#             */
/*   Updated: 2025/03/18 15:02:49 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       materias[4];

    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource( MateriaSource const & );
        MateriaSource&  operator=( MateriaSource const & );

        AMateria*       createMateria( std::string const & type );
        void            learnMateria( AMateria* );
};

#endif 