#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

template <typename T>
void easyfind(T t,int num)
{
    for (typename T::iterator it = t.begin(); it != t.end(); ++it)
    {
        if (*it == num)
        {
            std :: cout << "found"<< std :: endl;
            return;
        }
    }
    throw std :: exception();

}
#endif