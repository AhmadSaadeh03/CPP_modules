#include "Zombie.hpp"
int main()
{
    Zombie *zombie = newZombie("heap zombie");
    zombie->announce();
    randomChump("stack zombie");
    delete(zombie);
    return 0;
}