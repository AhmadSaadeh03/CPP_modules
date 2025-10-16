#include "ScavTrap.hpp"
ScavTrap :: ScavTrap()
{
    std :: cout <<"ScavTrap Default Constructor Called" << std :: endl;
    name = "";
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
ScavTrap :: ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    
        std :: cout <<"ScavTrap Copy Constructor Called" << std :: endl;
        this->name = other.name;
        this->HitPoint = other.HitPoint;
        this->EnergyPoint = other.EnergyPoint;
        this->AttackDamage = other.AttackDamage;
}
ScavTrap& ScavTrap :: operator=(const ScavTrap &other)
{
    std::cout <<"ScavTrap Copy assignment operator called" << std::endl;    
    if (this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
        this->HitPoint = other.HitPoint;
        this->name = other.name;
    }
    return *this;
}
ScavTrap ::  ~ScavTrap()
{
     std :: cout << "ScavTrap Destructor Called" << std :: endl;
}
void ScavTrap :: guardGate()
{
    std :: cout << "ScavTrap " << name << " is now in Gate Keeper mode ! " << std :: endl;
}
void  ScavTrap :: attack(const std :: string &target)
{
    std :: cout << "ScavTrap :\n"; //parital override // its not override actually is a hidden functino 
    ClapTrap :: attack(target);
    // i can rewrite the whole function but that if i wanna change the whole logic

}; 
