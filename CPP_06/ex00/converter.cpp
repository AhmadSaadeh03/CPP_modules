#include "ScalarConverter.hpp"
#include <limits>

void convert_char(double i, double d, float f, char c)
{
    (void)i;
     std::cout << std::fixed << std::setprecision(1);
    int number = static_cast<int>(c);
    d = static_cast<double>(c);
    f = static_cast<float>(c);
    std :: cout <<"char : " << c << "\nint : " << number << "\nfloat : " << f <<"f" << "\ndouble : " << d << std :: endl;
}

void convert_int(double i, double d, float f, char c)
{
    int number = 0;
    if (i > 32 && i <=126)
    {
        c = static_cast<char>(i);
        std :: cout <<"char : " << c << std :: endl;
    }
    else
        std :: cout <<"char : " << "Non displayable" << std :: endl;
    if (i >  std :: numeric_limits<int> :: max() || i < std :: numeric_limits<int> :: min())
        std :: cout <<"int : " << "impossible"<< std :: endl;
    else
    {
        std::cout << std::fixed << std::setprecision(1); // change the behavior of cout , cout is a global obj
        number = static_cast<int>(i);
        std :: cout <<"int : " << number<< std :: endl;
    }
    d = static_cast<double>(i);
    f = static_cast<float>(i);

    std :: cout << "float : " << f <<"f" << "\ndouble : " << d << std :: endl;
}
void convert_float(double i, double d, float f, char c)
{
    (void)i;
    c = '*';
    std :: cout << "char : " << c << std :: endl;
    if (f >  std :: numeric_limits<int> :: max() || f < std :: numeric_limits<int> :: min())
        std :: cout <<"int : " << "impossible"<< std :: endl; 
    else
    {
        std::cout << std::fixed << std::setprecision(1);
        int number = static_cast<int>(f);
        std :: cout <<"int : " << number<< std :: endl;
    }
    d = static_cast<double>(f);
    std :: cout << "float : " << f <<"f" << "\ndouble : " << d << std :: endl;
}
void convert_double(double i, double d, float f, char c)
{
    (void)i;
    c = '*';
    std :: cout << "char : " << c << std :: endl;
     if (d >  std :: numeric_limits<int> :: max() || d < std :: numeric_limits<int> :: min())
        std :: cout <<"int : " << "impossible"<< std :: endl;
    else
    {
        std::cout << std::fixed << std::setprecision(1);
        int number  = static_cast<int>(d);
        std :: cout <<"int : " << number<< std :: endl;
    }
    f = static_cast<float>(d);
   std :: cout << "float : " << f <<"f" << "\ndouble : " << d << std :: endl;
}
void prind_invalid()
{
    std :: cout <<"char : " << "impossible" << "\nint : " << "impossible" << "\nfloat : " << "impossible" <<"\ndouble : " << "impossible" << std :: endl;
}
int handle_literals(std :: string str)
{
    if (!str.compare("+inff") || !str.compare("inff") || !str.compare("+inf")|| !str.compare("inf"))
    {
        std :: cout <<"char : " << "impossible"<< "\nint : " << "impossible"<< "\nfloat : " << "inf" <<"f" << "\ndouble : " << "inf" << std :: endl;
        return 1;
    }
    else if (!str.compare("-inff") || !str.compare("-inf"))
    {
        std :: cout <<"char : " << "impossible"<< "\nint : " << "impossible"<< "\nfloat : " << "-inf" <<"f" << "\ndouble : " << "-inf" << std :: endl;
        return 1;
    }
    else if (!str.compare("nan") || !str.compare("nanf"))
    {
        std :: cout <<"char : " << "impossible"<< "\nint : " << "impossible"<< "\nfloat : " << "nan" <<"f" << "\ndouble : " << "nan" << std :: endl;
        return 1;
    }
    return 0;
}