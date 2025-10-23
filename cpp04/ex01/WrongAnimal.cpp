#include "WrongAnimal.hpp"
WrongAnimal :: WrongAnimal()
{
    std :: cout << "WrongAnimal default constructor called" << std :: endl;
    type = "";
}
WrongAnimal :: WrongAnimal(const WrongAnimal &other)
{
    std :: cout << "WrongAnimal copy constructor called" << std :: endl;
    this->type = other.type;
}
WrongAnimal :: ~WrongAnimal()
{
    std :: cout << "WrongAnimal destructor called" << std :: endl;
}
WrongAnimal&  WrongAnimal :: operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std :: cout << "WrongAnimal operator overloading called" << std :: endl;
    }
    return *this;
}
std :: string WrongAnimal ::  getType() const
{
    return this->type;
}
void WrongAnimal :: setType(std :: string type)
{
    this->type = type;
}
void  WrongAnimal :: makeSound() const
{
    std::cout << "wrong animal" << std::endl;
}