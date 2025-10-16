#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main ()
{
std::cout << "\n=== FragTrap High-Five Test ===\n";
FragTrap frag("Khaled");
frag.attack("Enemy");
frag.beRepaired(5);
frag.highFivesGuys();
frag.takeDamage(50);
frag.highFivesGuys(); 
}
