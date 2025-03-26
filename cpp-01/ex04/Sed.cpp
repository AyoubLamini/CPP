/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:54:28 by alamini           #+#    #+#             */
/*   Updated: 2025/01/31 23:28:43 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file)
{
    _inFile = file;
    _outFile = _inFile + ".replace";
}

Sed::~Sed()
{
    
}

void Sed::replace(std::string _old, std::string _new)
{
    
    std::ifstream   ifs(_inFile.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Failed to open file" << std::endl;
        return ;
    }
    std::string file_content;
    if (!std::getline(ifs, file_content, '\0'))
    {
        ifs.close();
        std::cerr << "Read of empty file" << std::endl;
        return ;
    }
    std::ofstream ofs(_outFile.c_str());
    size_t  pos = file_content.find(_old);
    while (pos != std::string::npos)
    {
        file_content.erase(pos, _old.length());
        file_content.insert(pos, _new);
        pos = file_content.find(_old);
    }
    ofs << file_content;
    ifs.close();
    ofs.close();
}
