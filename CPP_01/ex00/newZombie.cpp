#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new (std :: nothrow ) Zombie(name);
    if (!zombie)
        return NULL;                                                                // pointer var is on the stack
                                                                     // The pointer just holds the address of the zombie object on the heap.
    return zombie;

}