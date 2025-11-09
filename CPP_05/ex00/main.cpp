#include "Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat a("ahmad",2);
        std :: cout << a << std :: endl;
        a.incrementBureaucrat();
        std :: cout << a << std :: endl;
       // a.incrementBureaucrat();
    }
    catch (std::exception &e)
    {
        std :: cout << e.what() << std :: endl;
    }
    try
    {
        Bureaucrat b("ali",150);
       // b.incrementBureaucrat();
        b.decrementBureaucrat();
        std :: cout << b << std :: endl;
        b.incrementBureaucrat();
        std :: cout << b << std :: endl;
    }
    catch (std::exception &e)
    {
        std :: cout << e.what() << std :: endl;
    }
}