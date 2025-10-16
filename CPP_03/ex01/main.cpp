#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

    int main()
{
    ScavTrap scav("khaled");
    ScavTrap s(scav);
    scav.attack("enemy");
    scav.beRepaired(6);
    scav.guardGate();
}
