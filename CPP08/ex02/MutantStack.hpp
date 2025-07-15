#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() {}
        MutantStack( const MutantStack& src ) { *this = src; }
        MutantStack &operator=(const MutantStack &rhs)
        {
            if (this != &rhs)
            {
                std::stack<T, Container>::operator=(rhs);
            }
            return *this;
        }
        ~MutantStack() {}

        typedef typename Container::iterator iterator;

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif