#include "HumanA.hpp"
void HumanA :: attack()
{
    std :: cout << name << " attacks with their " << weaponA.getType() << std ::endl;
};
HumanA::HumanA(std::string name, Weapon& ref_weapon): name(name), weaponA(ref_weapon)
{};

HumanA :: ~HumanA(){};
