#include "Brain.hpp"
Brain :: Brain()
{
    std :: cout << "Brain Default constructor called" << std :: endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = "";
    }
    
}
Brain :: Brain(const Brain &other)
{
    std :: cout << "Brain Copy constructor called" << std :: endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    
}
Brain :: ~Brain()
{
    std :: cout << "Brain Destructor called" << std :: endl;
}
Brain&  Brain :: operator=(const Brain &other)
{
    if (this != &other)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}
void Brain :: SetIdeas(int index , std :: string idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}
std :: string Brain :: GetIdeas(int index) const
{
    return this->ideas[index];
}
void Brain :: PrintIdeas()
{
    for (size_t i = 0; i < 4; i++)
    {
        std :: cout << this->ideas[i] << std :: endl;
    }
    
}
