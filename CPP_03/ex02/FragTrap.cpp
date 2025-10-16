#include "FragTrap.hpp"
FragTrap :: FragTrap()
{
    std :: cout <<"FragTrap Default Constructor Called" << std :: endl;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
};
FragTrap :: FragTrap(std :: string name) : ClapTrap(name) // this is the way to call the parameterized constructor from the parent (not the default one)
{
     std :: cout <<"FragTrap parameterized Constructor Called" << std :: endl;
    this->name = name;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
};
FragTrap :: FragTrap(const FragTrap &other)
{
    
        std :: cout <<"FragTrap Copy Constructor Called" << std :: endl;
        this->name = other.name;
        this->HitPoint = other.HitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
}
FragTrap ::  ~FragTrap()
{
     std :: cout << "FragTrap Destructor Called" << std :: endl;
}
void FragTrap :: highFivesGuys(void)
{
    std :: cout << "FragTrap " << this->name << "request positive high-fives" << std :: endl;
}