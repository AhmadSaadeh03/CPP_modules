#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{
    std::cout << "=== Basic requirement test ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "\nTesting sounds:" << std::endl;
    j->makeSound();
    i->makeSound();
    std::cout << "\nDeleting animals (should not create a leak):" << std::endl;
    delete j; // should not create a leak
    delete i;
    std::cout << "\n=== Array of Animals test ===" << std::endl;
    const int arraySize = 10;
    Animal* animals[arraySize];
    std::cout << "Creating array - half Dogs, half Cats:" << std::endl;
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
    std::cout << "Testing sounds from array:" << std::endl;
    for (int k = 0; k < arraySize; k++)
    {
        std::cout << "Animal " << k << " (" << animals[k]->getType() << "): ";
        animals[k]->makeSound();
    }
    std::cout << "\nDeleting all animals from array:" << std::endl;
    for (int k = 0; k < arraySize; k++)
    {
        std::cout << "Deleting animal " << k << ":" << std::endl;
        delete animals[k];
        std::cout << std::endl;
    }
    std::cout << "\n=== Deep copy test for Dog ===" << std::endl;
    Dog originalDog;
    std::cout << "\nOriginal dog brain ideas:" << std::endl;
    originalDog.GetBrain().PrintIdeas();
    // Modify original dog's brain
    originalDog.GetBrain().SetIdeas(0, "Modified dog idea #1");
    originalDog.GetBrain().SetIdeas(1, "Modified dog idea #2");
    std::cout << "\nAfter modification, original dog brain ideas:" << std::endl;
    originalDog.GetBrain().PrintIdeas();
    // Test copy constructor
    std::cout << "\nTesting copy constructor:" << std::endl;
    Dog copiedDog(originalDog);
    std::cout << "Copied dog brain ideas:" << std::endl;
    copiedDog.GetBrain().PrintIdeas();
    // Modify copied dog's brain to test deep copy
    copiedDog.GetBrain().SetIdeas(0, "Copied dog's own idea #1");
    copiedDog.GetBrain().SetIdeas(1, "Copied dog's own idea #2");
    std::cout << "\nAfter modifying copied dog, original dog brain ideas (should be unchanged):" << std::endl;
    originalDog.GetBrain().PrintIdeas();
    std::cout << "Copied dog brain ideas (should be different):" << std::endl;
    copiedDog.GetBrain().PrintIdeas();
    // Test assignment operator
    std::cout << "\nTesting assignment operator:" << std::endl;
    Dog assignedDog;
    std::cout << "Before assignment, assigned dog brain ideas:" << std::endl;
    assignedDog.GetBrain().PrintIdeas();
    assignedDog = originalDog;
    std::cout << "After assignment, assigned dog brain ideas:" << std::endl;
    assignedDog.GetBrain().PrintIdeas();
    // Modify assigned dog's brain to test deep copy
    assignedDog.GetBrain().SetIdeas(0, "Assigned dog's own idea #1");
    assignedDog.GetBrain().SetIdeas(1, "Assigned dog's own idea #2");
    std::cout << "\nAfter modifying assigned dog, original dog brain ideas (should be unchanged):" << std::endl;
    originalDog.GetBrain().PrintIdeas();
    std::cout << "Assigned dog brain ideas (should be different):" << std::endl;
    assignedDog.GetBrain().PrintIdeas();
    std::cout << "\n=== Deep copy test for Cat ===" << std::endl;
    Cat originalCat;
    std::cout << "\nOriginal cat brain ideas:" << std::endl;
    originalCat.GetBrain().PrintIdeas();
    // Modify original cat's brain
    originalCat.GetBrain().SetIdeas(0, "Modified cat idea #1");
    originalCat.GetBrain().SetIdeas(1, "Modified cat idea #2");
    std::cout << "\nAfter modification, original cat brain ideas:" << std::endl;
    originalCat.GetBrain().PrintIdeas();
    // Test copy constructor
    std::cout << "\nTesting copy constructor:" << std::endl;
    Cat copiedCat(originalCat);
    std::cout << "Copied cat brain ideas:" << std::endl;
    copiedCat.GetBrain().PrintIdeas();
    // Modify copied cat's brain to test deep copy
    copiedCat.GetBrain().SetIdeas(0, "Copied cat's own idea #1");
    copiedCat.GetBrain().SetIdeas(1, "Copied cat's own idea #2");
    std::cout << "\nAfter modifying copied cat, original cat brain ideas (should be unchanged):" << std::endl;
    originalCat.GetBrain().PrintIdeas();
    std::cout << "Copied cat brain ideas (should be different):" << std::endl;
    copiedCat.GetBrain().PrintIdeas();
    std::cout << "\n=== Memory leak test with Animal pointers ===" << std::endl;
    const Animal* dogPtr = new Dog();
    const Animal* catPtr = new Cat();
    std::cout << "Created Dog and Cat via Animal pointers" << std::endl;
    dogPtr->makeSound();
    catPtr->makeSound();
    std::cout << "\nDeleting via Animal pointers (virtual destructors should work):" << std::endl;
    delete dogPtr;
    delete catPtr;
    std::cout << "\n=== Test completed successfully! ===" << std::endl;
    return 0;
}