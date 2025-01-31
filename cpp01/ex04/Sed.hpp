/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:52:35 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 23:20:37 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::string _inFile;
        std::string _outFile;
    public:
        Sed(std::string filename);
        ~Sed();
        void replace(std::string _old, std::string _new);
};


#endif