#include "Span.hpp"
#include <ctime> 
int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp2 = Span(5);
        sp2.addNumber(-2147483640); 
        sp2.addNumber(17);
        sp2.addNumber(2147483647);
        sp2.addNumber(11);

        std::cout << "min Span " << sp2.shortestSpan() << std::endl;
        std::cout << "max Span " <<  sp2.longestSpan() << std::endl;
    }
    try 
    {
        unsigned int size = 10000;
        std::vector<int> numbers(size);
        std::srand( std::time (0) );
        std::generate(numbers.begin(), numbers.end(), std::rand);
        Span sp3 = Span(size);
        sp3.addNumbers(numbers.begin(), numbers.end());
        std::cout << "min Span " << sp3.shortestSpan() << std::endl;
        std::cout << "max Span " << sp3.longestSpan() << std::endl;
        // sp3.addNumber(100);
    }
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    
    

return 0;
}