/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:29:08 by alamini           #+#    #+#             */
/*   Updated: 2025/03/09 16:31:21 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat( void );
    WrongCat(const WrongCat& rhs);
    WrongCat& operator=(const WrongCat &rhs);
    ~WrongCat( void );

    void   makeSound( void ) const;
};

#endif