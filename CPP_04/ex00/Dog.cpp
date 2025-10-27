#include "Dog.hpp"
Dog :: Dog()
{
    std :: cout << "Dog default constructor called" << std :: endl;
    type = "Dog";
}
Dog :: Dog(const Dog &other)
{
    std :: cout << "Dog copy constructor called" << std :: endl;
    this->type = other.type;
}
Dog :: ~Dog()
{
    std :: cout << "Dog destructor called" << std :: endl;
}
Dog&  Dog :: operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std :: cout << "Dog operator overloading called" << std :: endl;
    }
    return *this;
}
void Dog :: makeSound() const
{
    std :: cout << "bark!" << std :: endl;
}
