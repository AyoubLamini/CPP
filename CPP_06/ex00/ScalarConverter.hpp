#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


# include "ScalarConverter.hpp"
# include <iostream>
# include <limits>
# include <cstdlib>
# include <cmath>


# define MIN_INT std::numeric_limits<int>::min()
# define MAX_INT std::numeric_limits<int>::max()
# define MIN_FLOAT std::numeric_limits<float>::min()
# define MAX_FLOAT std::numeric_limits<float>::max()
# define MIN_DOUBLE std::numeric_limits<double>::min()
# define MAX_DOUBLE std::numeric_limits<double>::max()

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter( const ScalarConverter& src );
        ~ScalarConverter();
        ScalarConverter& operator=( const ScalarConverter& rhs );
    public:
        static void convert(const std::string& literal);

};

#endif