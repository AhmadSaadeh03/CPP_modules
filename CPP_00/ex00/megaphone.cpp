
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std :: cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }
    std::string str;
    for (size_t i = 1; argv[i]; i++)
    {
        for (size_t j = 0; argv[i][j]; j++)
        {
            str += toupper(argv[i][j]);
        }
        std::cout << str;
        std :: cout << " ";
        str.clear();
    }
    std::cout << std::endl;
    return (0);
}