#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }
    try
    {
        BitcoinExchange exchange;
        exchange.parseInputFile(argv[1]);
    }
    catch(const FileException& e)
    {
        std::cout << e.what() << '\n';
        exit(1);
    }
    
  
    return 0;
}