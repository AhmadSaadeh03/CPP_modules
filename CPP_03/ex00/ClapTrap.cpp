#include "ClapTrap.hpp"

ClapTrap :: ClapTrap():name(""), HitPoint(10) ,EnergyPoint(10),AttackDamage(0)
{
    std :: cout << "ClapTrap Default Constructor Called" << std :: endl;
};
ClapTrap :: ClapTrap(std :: string name): name(name),HitPoint(10) ,EnergyPoint(10),AttackDamage(0)
{
    std :: cout << "ClapTrap parameterized Constructor Called" << std :: endl;
};
ClapTrap :: ~ClapTrap()
{
    std :: cout << "ClapTrap Destructor Called" << std :: endl;
};
ClapTrap :: ClapTrap(const ClapTrap &other)
{
    std::cout <<"ClapTrap Copy Constructor called" << std::endl;    
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoint = other.EnergyPoint;
    this->HitPoint = other.HitPoint;
    this->name = other.name;
}
ClapTrap &ClapTrap ::  operator=(const ClapTrap &other)
{
    std::cout <<"ClapTrap Copy assignment operator called" << std::endl;    
    if (this != &other)
    {
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
        this->HitPoint = other.HitPoint;
        this->name = other.name;
    }
    return *this;
}
void ClapTrap :: attack(const std :: string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        std :: cout << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage! " << std :: endl;
        EnergyPoint-=1;
    }
    else 
        std :: cout << "cant attack" << std :: endl;
}
void  ClapTrap ::takeDamage(unsigned int amount)
{
    int AmountInt = static_cast<int>(amount);
    if (AmountInt < 0)
    {
        std :: cout << "cant insert negative number" << std :: endl;
        return ;
    }
    if (this->HitPoint <= 0) {
        std::cout << this->name << "Dead" << std::endl;
        return;
    }
    else if (amount >= this->HitPoint) {
        this->HitPoint = 0;
        std::cout << this->name << " takes " << amount << " of damage! " << std::endl;
        std::cout << this->name << " Dead" << std::endl;

        return;
    } 
    this->HitPoint -= amount;
    std::cout << this->name << " takes " << amount << " of damage! " << std::endl;
}
void ClapTrap :: beRepaired(unsigned int amount)
{
    int AmountInt = static_cast<int>(amount);
    if (AmountInt < 0)
    {
        std :: cout << "cant insert negative number" << std :: endl;
        return;
    }
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        this->EnergyPoint--;
        HitPoint+=amount;
        std :: cout << this->name << " repairs itself, regaining "<< amount << " hit points! " << std :: endl;

    }
    else 
        std :: cout << "cant repair" << std :: endl;
}