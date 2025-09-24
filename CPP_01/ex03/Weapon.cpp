#include "Weapon.hpp"


const std :: string&   Weapon :: getType()
{
    //const std :: string &t = type;
    return  type;// return value but i cant modify it
};
void Weapon:: setType(std :: string type)
{
    this->type = type;
}
Weapon:: Weapon()
{
    type = "";
    type.clear();
};
Weapon:: Weapon(std :: string str)
{
    this->type = str;
};
Weapon:: ~Weapon(){};