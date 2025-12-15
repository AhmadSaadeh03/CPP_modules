#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
class Span 
{
    unsigned int N;
    std :: vector<int> v;
    public:
            Span();
            Span(unsigned int N);
            Span(const Span &other);
            Span& operator=(const Span &other);
            ~Span();
            void addNumber(int num);
            void generateNumbers(std :: vector<int> :: iterator begin,std :: vector<int> :: iterator end); // std :: vector<int> generate,
            int shortestSpan();
            int longestSpan();
            class NotEnoughNumbersException : public std :: exception
            {
                virtual char const* what() const throw();
            };
};
#endif