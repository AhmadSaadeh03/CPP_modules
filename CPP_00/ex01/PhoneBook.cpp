
#include "include/PhoneBook.hpp"

static int check_phone_number(std ::string str)
{
        for (size_t i = 0;i < str.size(); i++)
        {
            if (!(std :: isdigit(str[i])))
                return 0;
        }
        return 1;
}

void PhoneBook :: add_contact(int index)
{
    std :: string first_name,last_name,nick_name,phone_number,secret;
    std :: cout<< "enter first name :\n";
    if (!(std :: getline(std::cin,first_name)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    while (first_name.empty())
    {
        std :: cout<< "enter first name :\n";
        if (!(std :: getline(std::cin,first_name)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    contact[index].set_first_name(first_name);
    std :: cout<< "enter last name :\n";
    if (!(std :: getline(std::cin,last_name)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    while (last_name.empty())
    {
        std :: cout<< "enter last name :\n";
        if (!(std :: getline(std::cin,last_name)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    contact[index].set_last_name(last_name);
    std :: cout<< "enter nickname :\n";
    if (!(std :: getline(std::cin,nick_name)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    while (nick_name.empty())
    {
        std :: cout<< "enter nickname :\n";
        if (!(std :: getline(std::cin,nick_name)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    contact[index].set_nickname(nick_name);
    std :: cout<< "enter phone number :\n";
    if (!(std :: getline(std::cin,phone_number)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    while (phone_number.empty())
    {
        std :: cout<< "enter phone number :\n";
        if (!(std :: getline(std::cin,phone_number)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    while (!check_phone_number(phone_number))
    {
        std :: cerr << "invalid number ,please add different number" << std :: endl;
        if (!(std :: getline(std::cin,phone_number)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    contact[index].set_phone_number(phone_number);
    std :: cout<< "enter darkest secret :\n";
     if (!(std :: getline(std::cin,secret)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    while (secret.empty())
    {
        std :: cout<< "enter darkest secret :\n";
        if (!(std :: getline(std::cin,secret)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        continue;
    }
    contact[index].set_darkest_secret(secret);
    std :: cout << "end the contacts\n";
}
void  PhoneBook :: get_full_info(std :: string str,int num)
{
  int i = atoi(str.c_str());
  i--;
  if (i < 0)
  {
    std :: cout << "Invalid Index" << std ::endl;
  }
  else if (num > i)
  {
    std :: cout << "First name :" << contact[i].get_first_name() << std :: endl;
    std :: cout << "Last name :" << contact[i].get_last_name() << std :: endl;
    std :: cout << "Nickname name :" << contact[i].get_nickname() << std :: endl;
    std :: cout << "phone number :" << contact[i].get_phone_number()<< std :: endl;
    std :: cout << "darkest secret :" << contact[i].get_darkest_secret()<< std :: endl;
  }
  else 
    std :: cout << "invalid index" << std :: endl;
}
void PhoneBook:: search_contact()
{

    int num = get_index();
    std :: string str;
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First name"
              << "|" << std::setw(10) << "Last name"
              << "|" << std::setw(10) << "Nickname"
              << "|" << std::endl;
    
    for (int i = 0; i < num; i++)
    {
        std :: string first = contact[i].get_first_name();
        if (first.size() > 10)
            first = first.substr(0,9) + '.';
        std :: string last = contact[i].get_last_name();
        if (last.size() > 10)
            last = last.substr(0,9) + '.';
        std :: string nickname = contact[i].get_nickname();
        if (nickname.size() > 10)
            nickname = nickname.substr(0,9) + '.';
        std :: string phone_number = contact[i].get_phone_number();
        std :: string darkest = contact[i].get_darkest_secret();
        std::cout << "|" << std::setw(10) << i+1
                << "|" << std::setw(10) << first
                << "|" << std::setw(10) << last
                << "|" << std::setw(10) << nickname
                        << "|" << std::endl;

    }
    int count = 0;
    std :: cout << "Please enter the index" << std :: endl;
    if(!(std :: getline(std::cin,str)))
    {
        std :: cerr << "bye\n";
        exit(1);
    }
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ' && str[i]!= '\t' && str[i] != '\n')
            count++;
    }
    while (str.empty() || count > 1)
    {
        count = 0;
       std :: cout << "Please enter the index" << std :: endl;
       if(!(std :: getline(std::cin,str)))
        {
            std :: cerr << "bye\n";
            exit(1);
        }
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] != ' ' && str[i]!= '\t' && str[i] != '\n')
                count++;
        }
        continue;
    }
    get_full_info(str,num);

}
void PhoneBook:: set_index(int num)
{
    index = num;
}
int PhoneBook :: get_index()
{
    return index;
}

