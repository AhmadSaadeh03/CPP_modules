#include "ClapTrap.hpp"
int main ()
{
 std::cout << "\n=== ClapTrap Basic Test ===\n";
ClapTrap clap("Ali");
clap.attack("Dummy");
clap.takeDamage(5);
clap.beRepaired(3);
clap.takeDamage(8);    // dies
clap.attack("AnotherDummy"); // should fail (no HP)
clap.beRepaired(5);    // should fail (no HP)

}