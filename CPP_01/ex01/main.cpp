#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    int n = 4;
    zombie = zombieHorde(n,"ahmad");
    if (!zombie)
        return 1;
    for (int i = 0; i < n; i++)
        zombie[i].announce();
    delete[] zombie; 
    return 0;
}