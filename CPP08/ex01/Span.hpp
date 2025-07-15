#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <vector>

#include <algorithm>
#include <limits>

class Span {
private:
    unsigned int _size;
    std::vector<int> _numbers;
public:
    Span();
    Span(unsigned int size);
    Span(const Span& src);
    ~Span();
    Span& operator=(const Span& other);
    void addNumber(int number);
    long long shortestSpan();
    long long longestSpan();

    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    class SpanFullException : public std::exception{
        public:
            virtual const char* what() const throw();
    };
    class NotEnoughNumbersException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
   
};
#endif 