#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

    std::ifstream file("data.csv");
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t delim = line.find(',');

        std::string date = line.substr(0, delim);
        std::string value = line.substr(delim + 1, line.length());

        dataBase[date] = value;
    }

    file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) : dataBase(src.dataBase) {
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    if (this != &rhs) {
        dataBase = rhs.dataBase;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

int BitcoinExchange::charOccurence(const std::string& literal, char c) 
{
    int count = 0;
    for (size_t i = 0; i < literal.length(); ++i)
    {
        if (literal[i] == c)
            count++;
    }
    return count;
}
double BitcoinExchange::stringToDouble(const std::string &str) {
    double d;

    std::istringstream iss(str);
    iss >> d;
    return d;
}

bool BitcoinExchange::isValidNumber(const std::string &valueStr) {

    if (charOccurence(valueStr, '.') > 1 || 
        charOccurence(valueStr, '-') > 1 || 
        charOccurence(valueStr, '+') > 1)
        return false;
    for (size_t i = 0; i < valueStr.size(); ++i) {
        if (!isdigit(valueStr[i]) && valueStr[i] != '.' && valueStr[i] != '-' && valueStr[i] != '+') {
            return false;
        }
    }
    if (valueStr.find('+') != std::string::npos && valueStr.find('+') != 0)
        return false;
    if (valueStr.find('-') != std::string::npos && valueStr.find('-') != 0)
        return false;
    // Check for valid decimal point placement
    size_t  dot = valueStr.find('.');
    if (dot != std::string::npos)
    {
        if (dot == 0 || dot == valueStr.length() - 1)
            return false;
    }
    return true;
}
bool BitcoinExchange::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}


void BitcoinExchange::parseDate(const std::string &date) {
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
        std::cout << "Error: bad input => " + date << std::endl;
        throw argsException();
    }
    for (size_t i = 0; i < date.size(); ++i) {
        if (i != 4 && i != 7 && !isdigit(date[i])) {
            std::cout << "Error: bad input => " + date << std::endl;
            throw argsException();
        }
    }
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);

    int yearInt = atoi(year.c_str());
    int monthInt = atoi(month.c_str());
    int dayInt = atoi(day.c_str());

    
    if (yearInt < 2000 || yearInt > 2025 || monthInt < 1 || monthInt > 12 || dayInt < 1 || dayInt > daysInMonth(yearInt, monthInt)) {
        std::cout << "Error: bad input => " + date << std::endl;
        throw argsException();
    }
}

void BitcoinExchange::parseDelimiter(const std::string &delimiter) {
    if (delimiter.empty()) {
        std::cout << "Error: no delimter provided" << std::endl;
        throw argsException();
    }
    if (delimiter != "|") {
        std::cout << "Error: Invalid delimiter" << std::endl;
        throw argsException();
    }
}

void  BitcoinExchange::parseValue(const std::string &valueStr)
{
    if (valueStr.empty()) {
        std::cout << "Error: no value provided" << std::endl;
        throw argsException();
    }
    if (!isValidNumber(valueStr)) {
        std::cout << "Error: Invalid value format" << std::endl;
        throw argsException();
    }
    double value = atof(valueStr.c_str());
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        throw argsException();
    }
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        throw argsException();
    }
}


void BitcoinExchange::parseInputFile(const std::string &fileName) {

    std::ifstream file(fileName.c_str());
    if (!file.is_open()) {
        throw FileException("Could not open file: " + fileName);
    }
    if (file.peek() == std::ifstream::traits_type::eof()) {
        throw InvalidFileException("file is empty");
    }
    std::string line;

    std::getline(file, line);
    if (line != "date | value") {
        throw InvalidFileException("Invalid header in input file");
    }

    while (std::getline(file, line)) 
    {
        if (line.empty()) {
            continue;
        }
               
        std::istringstream iss(line);
        std::string date;
        std::string valueStr;
        std::string delimiter;

        iss >> date;
        iss >> delimiter;
        iss >> valueStr;
        try {
            parseDate(date);
            parseDelimiter(delimiter);
            parseValue(valueStr);
            if (findDate(date)) 
            {
                std::cout << date << " => " << valueStr << " = " << getValuePerDate(date) * stringToDouble(valueStr) << std::endl;   
            }
            else 
            {
                try
                {
                    std::string previousDate = findPreviousDate(date);
                    std::cout << date << " => " << valueStr << " = " << getValuePerDate(previousDate) * stringToDouble(valueStr) << std::endl;   
                }
                catch (const std::runtime_error &e) 
                {
                    std::cout << "Error: " << e.what() << std::endl;
                    continue;
                }
            }
        }
        catch (const argsException &e) 
        {
            continue;
        }
    }
    file.close();
}


bool BitcoinExchange::findDate(const std::string &date) {
    return dataBase.find(date) != dataBase.end();
}

double BitcoinExchange::getValuePerDate(const std::string &date) {
    std::map<std::string, std::string>::iterator it = dataBase.find(date);
    if (it != dataBase.end()) {
        return stringToDouble(it->second);
    }
    return 0.0;
}

std::string BitcoinExchange::findPreviousDate(const std::string &date)
{
    std::map<std::string, std::string>::iterator it = dataBase.lower_bound(date);
    if (it == dataBase.begin()) {
        throw std::runtime_error("No previous date found");
    }
    --it;
    return it->first;
}

            
BitcoinExchange::InvalidFileException::InvalidFileException(const std::string &msg) : message(msg) {
}

const char* BitcoinExchange::InvalidFileException::what() const throw() {
    return message.c_str();
}
