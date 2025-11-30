#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
template<typename T> 
class MutantStack : public std :: stack<T>
{
    private:
            std :: stack<T> s ;
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        
};
template<typename T>
MutantStack<T>::MutantStack()
{
    std :: cout << "Defualt constructor called" << std :: endl;
}
template<typename T>
MutantStack<T>::~MutantStack()
{
    std :: cout << "Destructor called" << std :: endl;
}
template<typename T>
MutantStack<T>:: MutantStack(const MutantStack &other)
{
    std :: cout << "Copy constructor called" << std :: endl;
    this->s = other.s;
}
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    
    std :: cout << "copy assignment operator called" << std :: endl;
    if (this != &other)
    {
        this->s = other.s;
    }
    return *this;
}
#endif