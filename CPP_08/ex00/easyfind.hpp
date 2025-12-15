#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &t,int num)
{
    typename T::iterator it = std::find(t.begin(), t.end(), num);
    
        if (it == t.end())
            throw std :: exception();
        return it;
}
#endif