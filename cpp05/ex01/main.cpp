#include "Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat a("ahmad",2);
        std :: cout << a << std :: endl;
        a.incrementBureaucrat();
        std :: cout << a << std :: endl;
        //a.incrementBureaucrat();
        Bureaucrat b("ali",151);
        a.incrementBureaucrat();
    }
    catch (std::exception &e)
    {
        std :: cout << e.what() << std :: endl;
    }
}