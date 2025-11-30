#include "Span.hpp"
Span :: Span() : N(0)
{
    std :: cout << "Default constructor called" << std :: endl;
};
Span :: Span(unsigned int N): N(N)
{
    std :: cout << "Parameterized constructor called" << std :: endl;
    v.reserve(N);
};
Span :: Span(const Span &other)
{
    std :: cout << "Copy constructor called" << std :: endl;
    this->N = other.N;
    this->v = other.v;
}
Span& Span :: operator=(const Span &other)
{
    std :: cout << "Copy assignment operator called" << std :: endl;
    if (this != &other)
    {
        this->N = other.N;
        this->v = other.v;
    }
    return *this;
}
Span :: ~Span()
{
    std :: cout << "Destructor called" << std :: endl;
}
void Span ::  generateNumbers(std :: vector<int> generate,std :: vector<int> :: iterator begin,std :: vector<int> :: iterator end)
{
    if (this->N >= generate.size())
        v.insert(v.begin(),begin,end);//pos , values
    else
        throw std :: out_of_range("Error\nout of range"); 
     for (size_t i = 0; i < N; i++)
        {
            std :: cout << v[i] << std :: endl;
        }

    
}
void Span :: addNumber(int num)
{
    static unsigned int i = 0;
    unsigned int temp = this->N;
    if(temp > 0)
    {
        v.push_back(num);
        temp--;
    }
    else
        throw std :: out_of_range("out of range");
    i++;
}
int Span :: shortestSpan()
{
    if (this->v.size() <= 1)
        throw NotEnoughNumbersException();
    int shortest;
    std :: vector<int> temp = v;
    std :: sort(temp.begin(),temp.end());
    shortest = temp.at(1) - temp.at(0);
    for (size_t i = 0; i < temp.size() - 1; i++)
    {
        if (temp.at(i+1) - temp.at(i) < shortest)
            shortest = temp.at(i+1) - temp.at(i);
    }
    return shortest;
}
int Span :: longestSpan()
{
    if (this->v.size() <= 1)
        throw NotEnoughNumbersException();
    std :: vector<int> temp = v;
    std :: sort(temp.begin(),temp.end());
    std::vector<int>::iterator it = temp.begin();
    std::vector<int>::iterator end = temp.end()-1;
    int longest = *end - *it;
    return longest;
}
char const* Span :: NotEnoughNumbersException ::  what() const throw()
{
    return "Error, there is no enough numbers";
}