#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
        std :: string name;
public:
        void set_name(std :: string name);
        void  announce();
        Zombie();
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif
