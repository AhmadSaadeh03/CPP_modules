#include "Harl.hpp"

void  Harl::debug(void)
{
    std :: cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl:: info(void)
{
    std :: cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void  Harl::warning(void)
{
    std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void Harl::error(void)
{
    std :: cout <<"This is unacceptable! I want to speak to the manager now.\n";
}
// void go_index(int i,void(*func))
// {
//     switch (i)
//     {
//     case 0:
//         std :: cout << "DEBUG";
//     case 1:
//         std :: cout <<"INFO";
//     case 2:
//         std :: cout <<"[ WARNING ]\n";
//     case 3:
//         std :: cout <<"ERROR";
//     }
// }
void Harl::complain(std :: string level)
{
    int flag = 0;
    void (Harl :: *func[4])() = {&Harl :: debug,&Harl ::info,&Harl ::warning,&Harl ::error};
    std :: string lev[4]  = {"DEBUG","INFO","WARNING","ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if (lev[i] == level)
        {
            flag = 1;
             switch (i)
            {
            case 0:
                std :: cout << "[ DEBUG ]\n";
                 (this->*func[i++])();
                 std ::cout << std ::endl;
            case 1:
                std :: cout <<"[ INFO ]\n";
                 (this->*func[i++])();
                 std ::cout << std ::endl;
            case 2:
                std :: cout <<"[ WARNING ]\n";
                 (this->*func[i++])();
                 std ::cout << std ::endl;
            case 3:
                std :: cout <<"[ ERROR ]\n";
                 (this->*func[i++])();
                 break;
            }
                    
        }
    }
    if (flag == 0)
        std :: cout << "[ Probably complaining about insignificant problems ]\n";
}