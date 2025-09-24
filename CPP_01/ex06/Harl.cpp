#include "Harl.hpp"

void  Harl::debug(void)
{
    std :: cout <<"[ DEBUG ]\n";
    std :: cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl:: info(void)
{
    std :: cout <<"[ INFO ]\n";
    std :: cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void  Harl::warning(void)
{
    std :: cout <<"[ WARNING ]\n";
    std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void Harl::error(void)
{
    std :: cout <<"[ ERROR ]\n";
    std :: cout <<"This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std :: string level)
{
    int index = 0;
    void (Harl :: *func[4])() = {&Harl :: debug,&Harl ::info,&Harl ::warning,&Harl ::error};
    if (level == "DEBUG")
        index = 1;
    else if (level == "INFO")
        index = 2;
    else if (level == "WARNING")
        index = 3;
    else if (level == "ERROR")
        index = 4;
    switch (index)
    {
    case 1:
            (this->*func[0])();
            std :: cout << std :: endl;
    case 2:
           (this->*func[1])();
           std :: cout << std :: endl;
    case 3:
            (this->*func[2])();
            std :: cout << std :: endl;
    case 4:
           (this->*func[3])();
           break;
    default:
            std :: cout << "[ Probably complaining about insignificant problems ]\n";
    }    
}