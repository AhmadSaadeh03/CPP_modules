#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
Base *generate(void)
{
    Base *b = NULL;
    srand(time(NULL));
    int a = rand() % 3;
    if (a == 0)
        b = new(A);
    else if (a == 1)
        b = new(B);
    else if (a == 2)
        b = new(C);
    return b;
}
void identify(Base *p)
{
    if (dynamic_cast<A*>(p))//Pointers return nullptr when cast fails
        std :: cout << "A" << std :: endl;
    else if (dynamic_cast<B*>(p))
        std :: cout << "B" << std :: endl;
    else if (dynamic_cast<C*>(p))
        std :: cout << "C" << std :: endl;
}

  void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p); // the dynamic cast throw exception with reference
        (void)a;
        std::cout << "A" << std::endl;
        return;
    } 
    catch(...) {}
    try 
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    } 
    catch(...) {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    } 
    catch(...) {}
}  
int main ()
{
    Base *b =generate();
    identify(b);
    identify(*b);
    delete b;
}