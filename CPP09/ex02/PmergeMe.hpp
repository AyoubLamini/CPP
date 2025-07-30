#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <ctime> 
#include <iomanip> 
#include <utility>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(int argc, char **argv);
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();

  

private:
    std::vector<int> _vector;
    std::deque<int> _deque;
    void sort();

    void parseInput(int argc, char **argv);

    void sortVector();
    void sortDeque();



    // vec
    void vectorMergePending(std::vector<int> &pending, std::vector<size_t> &seq, int odd);
    size_t binarySearchInsertPosVec(const std::vector<int> &vec, int value);
    std::vector<size_t> jacobsthalSequence(size_t size);
    std::vector<std::pair<int, int> > MakePairsVec(int &odd);
    void sortInsertVector(std::vector<std::pair<int, int> > &pairs);


    // deque
    void dequeMergePending(std::deque<int> &pending, std::vector<size_t> &seq, int odd);
    size_t binarySearchInsertPosDeque(const std::deque<int> &deq, int value);
    void sortInsertDeque(std::deque<std::pair<int, int> > &pairs);
    std::deque<std::pair<int, int> > MakePairsDeque(int &odd);



};


#endif 