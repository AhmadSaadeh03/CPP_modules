
#include "include/PhoneBook.hpp"

int main(int argc , char **argv)
{
    (void) argv;
    if (argc == 1)
    {
        std :: string str;
        PhoneBook phonebook;
        phonebook.set_index(0);
        int i = 0;
        while (1)
        {
            std :: cout << "Please enter the Command (ADD,SEARCH,EXIT):" << std :: endl;
            if (!std::getline(std::cin,str))
            {
                std::cerr << "bye" << std::endl;
                return 1;
            }
            while (str.empty())
            {
                std :: cout << "Please enter the Command (ADD,SEARCH,EXIT):" << std :: endl;
                if (!std::getline(std::cin,str))
                {
                    std::cerr << "bye" << std::endl;
                    return 1;
                }
                continue;
            }
            if (str == "ADD")
            {
                if (i < 8)
                {
                    phonebook.add_contact(i);
                    i++;
                    phonebook.set_index(i);
                }
                else
                {
                    phonebook.add_contact(i % 8);
                    i++;
                }
            }
            if (str == "SEARCH")
                phonebook.search_contact();
            if (str == "EXIT")
                break;
        }
    }
    else
    {
        std :: cerr<<"to many argument\n";
        return 1;
    }
    return 0;
}