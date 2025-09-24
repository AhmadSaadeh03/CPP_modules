#include "Zombie.hpp"
int main()
{
    Zombie *zombie = newZombie("heap zombie");
    if (!zombie)
        return 1;
    zombie->announce();
    randomChump("stack zombie");
    delete(zombie);
    return 0;
}