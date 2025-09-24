#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        return NULL;
    Zombie *zombie = new  (std :: nothrow ) Zombie[N];
    if (!zombie)
        return NULL;
    for (int i = 0; i < N; i++)
    {
       zombie[i].set_name(name);
    }
    return zombie;
}