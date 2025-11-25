#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T* array;
    size_t _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();
    Array& operator=(const Array& other);
    const T& operator[](size_t index) const;
    T& operator[](size_t index);
    size_t size()const;
};
template <typename T>
Array<T>::Array() : array(NULL), _size(0)
{
    std::cout << "Default constructor called\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    std::cout << "Parameterized constructor called\n";
    array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size)
{
    std::cout << "Copy constructor called\n";
    array = new T[_size];
    for (size_t i = 0; i < _size; i++)
        array[i] = other.array[i];
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Destructor called\n";
    delete[] array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other)
    {
        delete[] array;
        _size = other._size;
        array = new T[_size];
        for (size_t i = 0; i < _size; i++)
            array[i] = other.array[i];
    }
    return *this;
}

template <typename T>
const T& Array<T>::operator[](size_t index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
size_t Array<T>::size() const
{
    return _size;
}
#endif
