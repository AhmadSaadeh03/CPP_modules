#include "Cat.hpp"
Cat :: Cat()
{
    std :: cout << "Cat default constructor called" << std :: endl;
    type = "Cat";
}
Cat :: Cat(const Cat &other)
{
    std :: cout << "Cat copy constructor called" << std :: endl;
    this->type = other.type;
}
Cat :: ~Cat()
{
    std :: cout << "Cat destructor called" << std :: endl;
}
Cat&  Cat :: operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std :: cout << "Cat operator overloading called" << std :: endl;
    }
    return *this;
}

void Cat :: makeSound() const
{
    std :: cout << "Mew!" << std :: endl;
}