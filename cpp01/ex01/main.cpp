#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = zombieHorde(3,"ahmad");
    zombie[0].announce();
    zombie[1].announce();
    zombie[2].announce();
    delete[] zombie; 
}