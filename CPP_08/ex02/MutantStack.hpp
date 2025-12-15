#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T> 
class MutantStack : public std :: stack<T>
{
   
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack &other);
        typedef typename std::stack<T>::container_type::iterator iterator; // inside the stack there is a containter type , (deque)
        iterator begin() ;
        iterator end();     
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
     (void)other;
    std :: cout << "Copy constructor called" << std :: endl;

}
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
    (void)other;
    std :: cout << "copy assignment operator called" << std :: endl;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}
#endif