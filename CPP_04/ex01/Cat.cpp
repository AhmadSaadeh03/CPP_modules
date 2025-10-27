#include "Cat.hpp"
Cat :: Cat()
{
    std :: cout << "Cat default constructor called" << std :: endl;
    type = "Cat";
    brain = new Brain();
}
Cat :: Cat(const Cat &other)
{
    std :: cout << "Cat copy constructor called" << std :: endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
}
Cat :: ~Cat()
{
    std :: cout << "Cat destructor called" << std :: endl;
    delete(brain);

}
Cat&  Cat :: operator=(const Cat &other)
{
    if (this != &other)
    {
         delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = other.type;
        std :: cout << "Cat operator overloading called" << std :: endl;
    }
    return *this;
}

void Cat :: makeSound() const
{
    std :: cout << "Mew!" << std :: endl;
}
Brain& Cat :: GetBrain()const
{
    return *brain;
}