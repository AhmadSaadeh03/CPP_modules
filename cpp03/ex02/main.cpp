#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
std::cout << "\n=== ScavTrap Special Ability Test ===\n";
ScavTrap scav("Omar");
scav.attack("Target");
scav.takeDamage(20);
scav.beRepaired(10);
scav.guardGate(); // special ability

}
