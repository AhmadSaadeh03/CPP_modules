#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n=== ClapTrap Basic Test ===\n";
    ClapTrap clap("Ali");
    clap.attack("ahmad");
    clap.takeDamage(1);
    clap.beRepaired(3);
    return 0;
}