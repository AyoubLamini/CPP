#include <iostream>
#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    (void)argv;

    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    if (input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
        return 1;
    }
    std::cout << "Input: " << input << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    ScalarConverter::convert(input);
    std::cout << "----------------------------------------" << std::endl;
    return 0;
}