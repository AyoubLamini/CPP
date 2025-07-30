#include "RPN.hpp"
RPN::RPN()
{

}
RPN::RPN(const RPN &src)
{
    *this = src;
}
RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->operands = rhs.operands;
    }
    return *this;
}
RPN::~RPN()
{

}

bool RPN::isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int RPN::applyOperation(int a, int b, char op)
{
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0)
            {
                std::cerr << "Error: Division by zero." << std::endl;
                exit(EXIT_FAILURE);
            }
            return a / b;
        default:
            std::cerr << "Error: Unknown operator '" << op << "'." << std::endl;
            exit(EXIT_FAILURE);
    }
}

void RPN::process(const std::string &expression)
{
    if (expression.empty())
    {
        std::cerr << "Error: Empty expression." << std::endl;
        return;
    }

    for (size_t i = 0; i < expression.size(); ++i)
    {
        if (!std::isspace(expression[i]) && !std::isdigit(expression[i]) && !isOperator(expression[i]))
        {
            std::cerr << "Error: Invalid character '" << expression[i] << "' in expression." << std::endl;
            return;
        }
    }

    std::istringstream iss(expression);
    std::string token;
    int counter = 0;
    while (iss >> token)
    {
        if (token.size() > 1)
        {
            std::cerr << "Error: Invalid input: " << token << std::endl;
            return;
        }
        if (isdigit(token[0]))
        {
            operands.push(token[0] - '0');
        }

        if (isOperator(token[0]))
        {
            if (operands.size() < 2)
            {
                std::cerr << "Error: Not enough operands for operation." << std::endl;
                return;
            }
            int b = operands.top(); operands.pop();
            int a = operands.top(); operands.pop();
            int result = applyOperation(a, b, token[0]);
            counter++;
            operands.push(result);
        }
    }
    if (counter == 0)       
    {
        std::cerr << "Error: No operations performed." << std::endl;
        return;
    }
    if (operands.size() != 1)
    {
        std::cerr << "Error: not enough operators" << std::endl;
        return;
    }
    std::cout << operands.top() << std::endl;
}
