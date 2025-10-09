#include "ScavTrap.hpp"
ScavTrap :: ScavTrap()
{
    std :: cout <<"ScavTrap Default Constructor Called" << std :: endl;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
};
ScavTrap :: ScavTrap(std :: string name) : ClapTrap(name) // this is the way to call the parameterized constructor from the parent (not the default one)
{
     std :: cout <<"ScavTrap parameterized Constructor Called" << std :: endl;
    this->name = name;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
};
ScavTrap :: ScavTrap(const ScavTrap &other)
{
    
        std :: cout <<"ScavTrap Copy Constructor Called" << std :: endl;
        this->name = other.name;
        this->HitPoint = other.HitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
}
ScavTrap ::  ~ScavTrap()
{
     std :: cout << "ScavTrap Destructor Called" << std :: endl;
}
void ScavTrap :: guardGate()
{
    std :: cout << "ScavTrap " << name << " is now in Gate Keeper mode ! " << std :: endl;
}