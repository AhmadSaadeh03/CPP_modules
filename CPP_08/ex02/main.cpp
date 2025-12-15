#include "MutantStack.hpp"
#include <list>
#include <iostream>
#include <algorithm>

int main()
{
    std::cout << "===== BASIC MUTANTSTACK TEST =====" << std::endl;
    try {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << "Top: " << mstack.top() << std::endl;

        mstack.pop();

        std::cout << "Size after pop: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        std::cout << "Iterating through stack:" << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "===== STD::LIST TEST =====" << std::endl;
    try {
        std::list<int> lst;

        lst.push_back(5);
        lst.push_back(17);

        std::cout << "Back (top equivalent): " << lst.back() << std::endl;

        lst.pop_back();

        std::cout << "Size after pop: " << lst.size() << std::endl;

        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);

        std::cout << "Iterating through list:" << std::endl;

        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();

        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== USING STANDARD ALGORITHMS =====" << std::endl;
    try {
        MutantStack<int> mstack;

        mstack.push(7);
        mstack.push(3);
        mstack.push(9);
        mstack.push(1);

        std::cout << "Before sorting:" << std::endl;
        for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::sort(mstack.begin(), mstack.end());

        std::cout << "After sorting:" << std::endl;
        for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===== EMPTY STACK TEST =====" << std::endl;
    try {
        MutantStack<int> empty;

        std::cout << "Iterating empty stack:" << std::endl;
        for (MutantStack<int>::iterator it = empty.begin(); it != empty.end(); ++it)
            std::cout << *it << std::endl;

        std::cout << "OK (no crash)" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
