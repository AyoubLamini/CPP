#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& rhs)
{
	(void)rhs;

}

PmergeMe::~PmergeMe()
{

}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}


PmergeMe::PmergeMe(int argc, char **argv) {
    parseInput(argc, argv);
    
}




static bool isNumber(const std::string &str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}


static void printVector(const std::vector<int> &vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}


void PmergeMe::parseInput(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);
        long long num = std::atoll(argv[i]);
        if (num < 0 ) {
            std::cerr << "Error: only positive numbers are allowed." << std::endl;
            exit(EXIT_FAILURE);
        }
        else if (!isNumber(arg)) {
            std::cerr << "Error: non digit character found" << std::endl;
            exit(EXIT_FAILURE);
        }
        else if (num > std::numeric_limits<int>::max()) {
            std::cerr << "Error: Number too large." << std::endl;
            exit(EXIT_FAILURE);
        }
        _vector.push_back(static_cast<int>(num));
        _deque.push_back(static_cast<int>(num));
    }
    sort();
}




void PmergeMe::sort() 
{

   if (_vector.size() < 2 && _deque.size() < 2)
    {
        std::cout << "No sorting needed." << std::endl;
        return;
    }
   

    std::cout << "Before sorting: ";
    printVector(_vector);

    sortVector();
    
    sortDeque();
}



std::vector<size_t> PmergeMe::jacobsthalSequence(size_t n)
{
    std::vector<size_t> sequence;
    if (n == 0) return sequence;

    size_t j1 = 0;
    size_t j2 = 1;
    size_t last = 0;

    while (j2 < n) {
        for (size_t i = j2; i > last; --i) {
            if (i <= n) sequence.push_back(i);
        }
        last = j2;

        size_t next = j2 + 2 * j1;
        j1 = j2;
        j2 = next;
    }

    for (size_t i = n; i > last; --i) {
        sequence.push_back(i);
    }

    return sequence;
}




// Vector


size_t PmergeMe::binarySearchInsertPosVec(const std::vector<int> &vec, int value) 
{
    size_t left = 0;
    size_t right = vec.size();

    while (left < right) {
        size_t mid = (left + right) / 2;
        if (vec[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}



std::vector<std::pair<int, int> > PmergeMe::MakePairsVec(int &odd)
{
    size_t N = _vector.size();
   

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i + 1 < N; i += 2) {
        int a = _vector[i];
        int b = _vector[i + 1];
        if (a < b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }
    if (N % 2 != 0) odd = _vector.back();
    _vector.clear(); 
    return pairs;
}

void PmergeMe::sortInsertVector(std::vector<std::pair<int, int> > &pairs) 
{
   for (size_t i = 1; i < pairs.size(); ++i) {
        std::pair<int, int> temp = pairs[i];
        size_t j = i;
        while (j > 0 && temp < pairs[j - 1]) {
            pairs[j] = pairs[j - 1];
            --j;
        }
        pairs[j] = temp;
    }
}



void PmergeMe::vectorMergePending(std::vector<int> &pending, std::vector<size_t> &seq, int odd) 
{
    for (size_t i = 0; i < seq.size(); ++i) {
        int value = pending[seq[i] - 1];
        size_t pos = binarySearchInsertPosVec(_vector, value);
        _vector.insert(_vector.begin() + pos, value);
    }

    if (odd != -1) {
        size_t pos = binarySearchInsertPosVec(_vector, odd);
        _vector.insert(_vector.begin() + pos, odd);
    }
}

void PmergeMe::sortVector() {

    clock_t start = clock();
 
    int odd = -1;
    std::vector<std::pair<int, int> > pairs = MakePairsVec(odd);
    sortInsertVector(pairs);
   
    std::vector<int> pending;

    _vector.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); ++i) {
        _vector.push_back(pairs[i].first);
        pending.push_back(pairs[i].second);
    }
    pending.erase(pending.begin());



   std::vector<size_t> seq = jacobsthalSequence(pending.size());

    vectorMergePending(pending, seq, odd);
    double duration_us = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;

    std::cout << "After  sorting: ";
    printVector(_vector);
    std::cout << "Time to process a range of " << _vector.size() << " elements with [std::vector] " << std::fixed << std::setprecision(5) <<  duration_us << " us" << std::endl;


}




// Deque 










std::deque<std::pair<int, int> > PmergeMe::MakePairsDeque(int &odd)
{
    size_t N = _deque.size();

    std::deque<std::pair<int, int> > pairs;
    for (size_t i = 0; i + 1 < N; i += 2) {
        int a = _deque[i];
        int b = _deque[i + 1];
        if (a < b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }
    if (N % 2 != 0) odd = _deque.back();
    _deque.clear();
    return pairs;
}



void PmergeMe::sortInsertDeque(std::deque<std::pair<int, int> > &pairs) 
{
   for (size_t i = 1; i < pairs.size(); ++i) {
        std::pair<int, int> temp = pairs[i];
        size_t j = i;
        while (j > 0 && temp < pairs[j - 1]) {
            pairs[j] = pairs[j - 1];
            --j;
        }
        pairs[j] = temp;
    }
}




size_t PmergeMe::binarySearchInsertPosDeque(const std::deque<int> &deq, int value) 
{
    size_t left = 0;
    size_t right = deq.size();

    while (left < right) {
        size_t mid = (left + right) / 2;
        if (deq[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}




void PmergeMe::dequeMergePending(std::deque<int> &pending, std::vector<size_t> &seq, int odd) 
{
    for (size_t i = 0; i < seq.size(); ++i) {
        int value = pending[seq[i] - 1];
        size_t pos = binarySearchInsertPosDeque(_deque, value);
        _deque.insert(_deque.begin() + pos, value);
    }

    if (odd != -1) {
        size_t pos = binarySearchInsertPosDeque(_deque, odd);
        _deque.insert(_deque.begin() + pos, odd);
    }
}






void PmergeMe::sortDeque() {

    std::clock_t start = std::clock();


    int odd = -1;
    std::deque<std::pair<int, int> > pairs = MakePairsDeque(odd);
    sortInsertDeque(pairs);

    std::deque<int> pending;

    _deque.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); ++i) {
        _deque.push_back(pairs[i].first);
        pending.push_back(pairs[i].second);
    }
    pending.erase(pending.begin());



   std::vector<size_t> seq = jacobsthalSequence(pending.size());

    dequeMergePending(pending, seq, odd);
    double duration_us = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _deque.size() << " elements with [std::deque] " << std::fixed << std::setprecision(5) <<  duration_us << " us" << std::endl;
}
