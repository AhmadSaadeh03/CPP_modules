#include "Dog.hpp"
#include "Brain.hpp"
Dog :: Dog()
{
    std :: cout << "Dog default constructor called" << std :: endl;
    type = "Dog";
    brain = new Brain();
}
Dog :: Dog(const Dog &other)
{
    std :: cout << "Dog copy constructor called" << std :: endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type; 
}
Dog :: ~Dog()
{
    std :: cout << "Dog destructor called" << std :: endl;
    delete(brain);
}
Dog&  Dog :: operator=(const Dog &other)
{
    if (this != &other)
    {
        delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = other.type;
        std :: cout << "Dog operator overloading called" << std :: endl;
    }
    return *this;
}
void Dog :: makeSound() const
{
    std :: cout << "bark!" << std :: endl;
}

Brain& Dog :: GetBrain()const
{
    return *brain;
}
