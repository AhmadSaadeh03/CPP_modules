#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
class HumanA
{
    private :
                std :: string name;
                Weapon &weaponA;
    public :
            HumanA(std :: string name , Weapon &ref_weapon);
            ~HumanA();
            void attack();
};

#endif