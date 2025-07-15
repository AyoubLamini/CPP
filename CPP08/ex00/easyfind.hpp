#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void easyfind(T &container, int value) 
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        std::cout << "Value " << value << " not found in the container." << std::endl;
    else
        std::cout << "Value " << value << " found in the container." << std::endl;
}

#endif