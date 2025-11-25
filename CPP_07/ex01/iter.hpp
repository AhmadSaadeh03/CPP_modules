#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
template <typename T>
void print_arr(T &arr)
{
    std :: cout << arr << std :: endl;
}
template <typename T>
void printInt(const T &x)
{
    std::cout << x << std::endl;
}
template <typename T>
void increment(T &x) 
{
     x++; 
     std :: cout << x << std :: endl;
}
template <typename T , typename F>
void iter(T *arr,const unsigned int length, F func)
{
        for (size_t i = 0; i < length; i++)
            func(arr[i]); 
}

#endif