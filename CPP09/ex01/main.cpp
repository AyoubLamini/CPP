#include "RPN.hpp"


int main(int argc, char **argv)
{
    RPN rpn;

    if (argc != 2)
    {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }
    rpn.process(argv[1]);
    return 0;

}