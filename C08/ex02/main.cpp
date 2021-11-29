#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    {
        MutantStack<int, std::vector<int> > mstack;

        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);

        mstack.push(0);
        MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
        MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int, std::vector<int> > s(mstack);
    }

    {
        MutantStack<int, std::list<int> > listStack;

        listStack.push(5);
        listStack.push(17);
        std::cout << listStack.top() << std::endl;
        listStack.pop();
        std::cout << listStack.size() << std::endl;
        listStack.push(3);
        listStack.push(5);
        listStack.push(737);

        listStack.push(0);
        MutantStack<int, std::list<int> >::iterator it = listStack.begin();
        MutantStack<int, std::list<int> >::iterator ite = listStack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int, std::list<int> > s(listStack);
    }
    return 0;
}