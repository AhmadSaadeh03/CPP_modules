#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie :: ~Zombie()
{
    std :: cout << "destroy object :" << name << std :: endl;
};

void Zombie :: announce()
{
    std :: cout << name << " is created" << std :: endl;
}
void Zombie :: set_name(std :: string name)
{
    this->name = name;
}  