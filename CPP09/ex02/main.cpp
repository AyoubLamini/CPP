#include "PmergeMe.hpp"

int main(int argc, char **argv) {
   
    if (argc < 2) {
        std::cerr << "Usage: PmergeMe <numbers to sort>" << std::endl;
        return 1;
    }
   
    PmergeMe pmerge(argc, argv);

    return 0;
}