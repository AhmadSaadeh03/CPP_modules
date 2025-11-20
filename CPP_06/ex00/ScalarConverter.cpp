#include "ScalarConverter.hpp"

ScalarConverter :: ScalarConverter()
{
    std :: cout << "ScalarConverter Default constructor called" << std :: endl;
}
ScalarConverter :: ScalarConverter(const ScalarConverter &other)
{
    (void)other;
    std :: cout << "ScalarConverter Copy constructor called" << std :: endl;
}
ScalarConverter :: ~ScalarConverter()
{
    std :: cout << "ScalarConverter Destructor called" << std :: endl;
}
ScalarConverter& ScalarConverter :: operator=(const ScalarConverter &other)
{
    (void)other;
    std :: cout << "ScalarConverter Copy assignment operator called" << std :: endl;
    return *this;
}

void ScalarConverter :: convert(std :: string str)
{
    int length = str.size();
    float f = 0.0f;
    char c = '*';
    double d = 0.0;
    double i = 0;
    if (length == 1 && isalpha(str[0]))
    {
        c = str[0];
        convert_char(i,d,f,c);
    }
    else if (str[length - 1 ]== 'f' && check_dots(str))
    {
        int flag = 0;
        size_t i = 0;
        if (str[i] == '-' || str[i] == '+')
            i++;
        while(i < (str.size() - 1))
        {
            if (!isdigit(str[i]) && str[i] != '.')
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (!flag)
        {
           f = atof(str.c_str());
           convert_float(i,d,f,c);
        }
        else
        {
            prind_invalid();
            return;
        }
    }
    else if ((isdigit(str[0]) || str[0] == '-' || str[0] == '+') && check_dots(str))
    {

        if(check_if_double(str))
        {
            d = atof(str.c_str());
            convert_double(i,d,f,c);
        }
        else
        {
           prind_invalid();
            return;
        }
    }
    else if (isdigit(str[0]) || ((str[0] == '-' || str[0] == '+') && isdigit(str[1])))
    {
        if(check_if_int(str) == 1)
        {
            i = atof(str.c_str());       
            convert_int(i,d,f,c);
        }
        else
        {
            prind_invalid();
            return;
        }
    }
    else if (handle_literals(str))
        return;
    else 
    {
        prind_invalid();
        return;
    }
}