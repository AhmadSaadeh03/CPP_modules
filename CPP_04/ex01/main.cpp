#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{

    const int arraySize = 10;
    Animal* animals[arraySize];
    for (int k = 0; k < arraySize; k++)
    {
        if (k < arraySize / 2)
        {
            std::cout << "Creating Dog " << k << ":" << std::endl;
            animals[k] = new Dog();
        }
        else
        {
            std::cout << "Creating Cat " << k << ":" << std::endl;
            animals[k] = new Cat();
        }
        std::cout << std::endl;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////
    Dog d;
    d.GetBrain().SetIdeas(0,"hello");
    d.GetBrain().SetIdeas(3,"hiii");
    std :: cout << d.GetBrain().GetIdeas(0) << std :: endl;
    //d.GetBrain().PrintIdeas();
    Dog dog ; 
    dog = d;
    std :: cout << dog.GetBrain().GetIdeas(0) << std :: endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    for (int k = 0; k < arraySize; k++)
    {
        std::cout << "Deleting animal " << k << ":" << std::endl;
        delete animals[k];
        std::cout << std::endl;
    }
    return 0;
}