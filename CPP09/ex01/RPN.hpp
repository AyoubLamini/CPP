#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cstdlib>

class RPN {
    public:
        RPN();
        RPN(const RPN &src);
        RPN &operator=(const RPN &rhs);
        ~RPN();

        void process(const std::string &expression);

    private:
        std::stack<int> operands;

        int applyOperation(int a, int b, char op);
        bool isOperator(char c);
};

#endif