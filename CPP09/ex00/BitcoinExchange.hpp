#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cctype>

class BitcoinExchange {
    private:
    std::map<std::string, std::string> dataBase;
    void parseDate(const std::string &date);
    void parseValue(const std::string &valueStr);
    void parseDelimiter(const std::string &delimiter);
    bool findDate(const std::string &date);
    double getValuePerDate(const std::string &date);
    void   printMyData(bool decision);
    std::string findPreviousDate(const std::string &date);
    int charOccurence(const std::string& literal, char c);
    double stringToDouble(const std::string &str);
    bool isValidNumber(const std::string &valueStr);
    bool isLeapYear(int year);
    int daysInMonth(int year, int month);


    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &rhs);
        ~BitcoinExchange();
        
        void parseInputFile(const std::string &fileName);
       

    class InvalidFileException : public std::exception {
        private:
            std::string message;
        public:
            virtual ~InvalidFileException() throw() {}
            InvalidFileException(const std::string &msg);
            virtual const char * what() const throw();
        };

    class argsException : public std::exception {};
};
typedef BitcoinExchange::InvalidFileException FileException;

#endif