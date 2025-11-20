#include <iostream>
#include <string>
int check_if_double(std :: string str)
{
    int flag = 0;
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while( i < str.size())
    {
        if (str[i] == '.')
            flag = 1;
        if(!isdigit(str[i]) && (str[i] != '.'))
            return 0;
        i++;
    }
    if (flag == 1)
        return 1;
    return 0;
}
int check_if_int(std :: string str)
{
    int flag = 0;
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while( i < str.size())
    {
        if (str[i] == '.')
            flag = 1;
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    if (flag)
        return 0;
    return 1;
}
int check_dots(std :: string str)
{
    int count = 0;
    if (str[0] == '.' || str[str.size() - 1] == '.')
        return 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            count++;
    }
    if (count == 1)
        return 1;
    return 0;
}
int check_alpha(std :: string str)
{
    int count = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
            count++;
    }
    if (count == 0 || count == 1)
        return 1;
    return 0;
}