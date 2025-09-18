#include "HumanB.hpp"
void HumanB :: attack()
{
    if (weapon)
        std :: cout << name << " attacks with their " << weapon->getType();
    
    else if (!weapon)
            std :: cout << "there is no weapon\n";
};

HumanB :: HumanB(std :: string name) : name(name) ,weapon(NULL)
{};
HumanB :: ~HumanB()
{};

void HumanB :: setWeapon(Weapon &w)
{
    weapon = &w;
}