#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() 
{
}

ScalarConverter::ScalarConverter( const ScalarConverter& src ) {
    *this = src;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& rhs ) {
    if ( this == &rhs )
        return *this;
    return *this;
}



bool isSpecialLiteral(const std::string& input) {
    std::string strings[] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};
    for (int i = 0; i < 6; ++i) {
        if (input == strings[i])
            return true;
    }
    return false;
}




int isCharLiteral(const std::string& literal) 
{
    if (literal.length() == 1 && !std::isdigit(literal[0]))
    {
        return true;
    }
    else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
    {
        return true;
    }
    return false;
}



bool isIntLiteral(const std::string& literal) 
{

    if (literal[0] == '-' || literal[0] == '+')
    {
        if (literal.length() == 1)
            return false;
        for (size_t i = 1; i < literal.length(); ++i)
        {
            if (!std::isdigit(literal[i]))
                return false;
        }
    }
    else
    {
        for (size_t i = 0; i < literal.length(); ++i)
        {
            if (!std::isdigit(literal[i]))
                return false;
        }
    }
    if (literal.length() > 11 || (literal.length() == 11 && literal[0] != '-' && literal[0] != '+'))
        return false;
    return true;
}


int charOccurence(const std::string& literal, char c) 
{
    int count = 0;
    for (size_t i = 0; i < literal.length(); ++i)
    {
        if (literal[i] == c)
            count++;
    }
    return count;
}


int isFloatOrDoubleLiteral(const std::string& literal) 
{
    if (charOccurence(literal, '.') > 1 ||
        charOccurence(literal, 'f') > 1 || 
        charOccurence(literal, '-') > 1 || 
        charOccurence(literal, '+') > 1)
        return -1;
    
    size_t  dot = literal.find('.');
    size_t  f = literal.find('f');

    if (dot == std::string::npos)
        return -1;

    if (literal.find('+') != std::string::npos && literal.find('+') != 0)
        return -1;
    if (literal.find('-') != std::string::npos && literal.find('-') != 0)
        return -1;

    if (f != std::string::npos && f == literal.length() - 1)
    {
        if (dot == 0 || dot == literal.length() - 1 || dot == literal.length() - 2)
            return -1;
        for (size_t i = 0; i < literal.length() - 1; ++i)
        {
            if (i != dot && !std::isdigit(literal[i]) && literal[i] != '-' && literal[i] != '+')
                return -1;
        }
        return 1;
    }
    else
    {
        if (dot == 0 || dot == literal.length() - 1)
            return -1;
        for (size_t i = 0; i < literal.length(); ++i)
        {
            if (i != dot && !std::isdigit(literal[i]) && literal[i] != '-' && literal[i] != '+')
                return -1;
        }
        return 2;
    }
    return -1;
}


void specialCases(const std::string& literal) 
{
        std::string floatLiteral;
        std::string doubleLiteral;
        
        if (literal == "nan" || literal == "+inf" || literal == "-inf")
        {
            floatLiteral = literal + "f";
            doubleLiteral = literal;
        } 
        else if (literal == "nanf" || literal == "+inff" || literal == "-inff")
        {
            floatLiteral = literal;
            doubleLiteral = literal.substr(0, literal.length() - 1);
        }

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << floatLiteral << std::endl;
        std::cout << "double: " << doubleLiteral << std::endl;
}

void handleChar(const std::string& literal) 
{
        char c = literal.length() == 1 ? literal[0] : literal[1];
        if (!isprint(c))
        {
            std::cout << "char: Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char: '" << c << "'" << std::endl;
        }
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}


void handleInt(const std::string& literal) 
{
    long value = std::atol(literal.c_str());
	if (value < 0 || value > 127)
	    std::cout << "char: impossible" << std::endl;
	else
	{
		if (isprint(value))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	if (value < MIN_INT || value > MAX_INT)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}


void handleFloat(const std::string& literal) 
{
    float	value = std::atof(literal.c_str());
	bool tolerance = std::fabs(value - static_cast<int>(value)) < 1e-13;

	if (value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (isprint(value))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else 
			std::cout << "char: Non displayable" << std::endl;
	}
	
    long intValue = static_cast<long>(value);
	if (intValue < MIN_INT || intValue > MAX_INT)
		std::cout << "int: impossible" << std::endl;
	else
	    std::cout << "int: " << static_cast<int>(value) << std::endl;

	
	// if (value < MIN_FLOAT || value > MAX_FLOAT)
	// 	std::cout << "float: impossible" << std::endl; // check "99999999999999999999999999.0f"
	// else
	    std::cout << "float: " << value << (tolerance ? ".0f" : "f") << std::endl;

    
	std::cout << "double: " << static_cast<double>(value) << (tolerance ? ".0" : "") << std::endl; // safe cast to double
}

void handleDouble(const std::string& literal) 
{
    double value = std::atof(literal.c_str());
    bool tolerance = std::fabs(value - static_cast<int>(value)) < 1e-13;

    if (value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else
    {
        if (isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else 
            std::cout << "char: Non displayable" << std::endl;
    }

    if (value < MIN_INT || value > MAX_INT)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;

    if (value < MIN_FLOAT || value > MAX_FLOAT)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(value) << (tolerance ? ".0f" : "f") << std::endl;    

    if (value < MIN_DOUBLE || value > MAX_DOUBLE) // check this
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << value << (tolerance ? ".0" : "") << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    if (isSpecialLiteral(literal))
    {
        specialCases(literal);
        return;
    }
    else if (isCharLiteral(literal))
    {
        handleChar(literal);
        return;
    }
    else if (isIntLiteral(literal))
    {
        handleInt(literal);
        return;
    }
    else if (isFloatOrDoubleLiteral(literal) == 1)
    {
        handleFloat(literal);
        return;
    }
    else if (isFloatOrDoubleLiteral(literal) == 2)
    {
        handleDouble(literal);
        return;
    }
   

}