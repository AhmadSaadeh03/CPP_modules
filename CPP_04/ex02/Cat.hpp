#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"
#include "Animal.hpp"
class Cat : public Animal
{
    Brain *brain;
    public :
            Cat();
            Cat(const Cat &other);
            ~Cat();
            Cat& operator=(const Cat &other);
            void makeSound() const;
            Brain& GetBrain()const;
};
#endif
