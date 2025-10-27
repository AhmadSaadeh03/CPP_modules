#include "WrongCat.hpp"
WrongCat :: WrongCat()
{
    std :: cout << "WrongCat default constructor called" << std :: endl;
    type = "WrongCat";
}
WrongCat :: WrongCat(const WrongCat &other)
{
    std :: cout << "WrongCat copy constructor called" << std :: endl;
    this->type = other.type;
}
WrongCat :: ~WrongCat()
{
    std :: cout << "WrongCat destructor called" << std :: endl;
}
WrongCat&  WrongCat :: operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std :: cout << "WrongCat operator overloading called" << std :: endl;
    }
    return *this;
}

void WrongCat :: makeSound() const
{
    std :: cout << "Wolf Wolf!" << std :: endl;
}