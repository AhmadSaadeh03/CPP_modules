#include "easyfind.hpp"
int main()
{
    try
    {
        std :: list<int> l;
        l.push_back(2);
        l.push_back(7);
        l.push_back(4);
        l.push_back(3);
        l.push_front(4);
        easyfind(l,44);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std :: deque <int> d;
        d.push_back(2);
        d.push_back(7);
        d.push_back(4);
        d.push_back(3);
        std :: deque<int> ::iterator it = easyfind(d,2);
        std :: cout << *it<< std :: endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std :: vector<int> v;
        v.push_back(2);
        v.push_back(7);
        v.push_back(4);
        v.push_back(3);
        std :: vector<int> ::iterator it = easyfind(v,44);
        std :: cout << *it<< std :: endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}