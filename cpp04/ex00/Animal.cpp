#include "Animal.hpp"
Animal :: Animal()
{
    std :: cout << "Animal default constructor called" << std :: endl;
    type = "";
}
Animal :: Animal(const Animal &other)
{
    std :: cout << "Animal copy constructor called" << std :: endl;
    this->type = other.type;
}
Animal :: ~Animal()
{
    std :: cout << "Animal destructor called" << std :: endl;
}
Animal&  Animal :: operator=(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std :: cout << "Animal operator overloading called" << std :: endl;
    }
    return *this;
}
std :: string Animal ::  getType() const
{
    return this->type;
}
void Animal :: setType(std :: string type)
{
    this->type = type;
}
 void  Animal :: makeSound() const
{
    std::cout << "no sound" << std::endl;
}