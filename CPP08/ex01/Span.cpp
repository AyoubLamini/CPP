#include "span.hpp"

Span::Span() : _size(0) 
{

}

Span::Span(unsigned int size) : _size(size) 
{

}

Span::~Span() 
{

}

Span::Span(const Span& src)
{
    _size = src._size;
    _numbers = src._numbers;
    *this = src;
}

Span& Span::operator=(const Span& other) 
{
    if (this != &other) {
        _size = other._size;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int number) 
{
    if (_numbers.size() >= _size) {
        throw SpanFullException();
    }
    _numbers.push_back(number);
}

long long Span::longestSpan() 
{
    if (_numbers.size() < 2) {
        throw NotEnoughNumbersException();
    }
    long long maxNumber = *std::max_element(_numbers.begin(), _numbers.end());
    long long minNumber = *std::min_element(_numbers.begin(), _numbers.end());
    long long maxSpan = maxNumber - minNumber;
    return maxSpan;
}

long long  Span::shortestSpan() 
{
    if (_numbers.size() < 2) {
        throw NotEnoughNumbersException();
    }
    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    long long minSpan = std::numeric_limits<long long>::max();
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        long long span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) 
{
    while (begin != end) {
        addNumber(*begin);
        ++begin;
    }
}

const char* Span::SpanFullException::what() const throw() 
{
    return "Span is full";
}

const char* Span::NotEnoughNumbersException::what() const throw() 
{
    return "Not enough numbers to find a span";
}