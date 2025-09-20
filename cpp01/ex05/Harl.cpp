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

void Harl::complain(std :: string level)
{
    int flag = 0;
    void (Harl :: *func[4])() = {&Harl :: info,&Harl ::warning,&Harl ::error,&Harl ::debug};
    std :: string lev[4]  = {"INFO","WARNING","ERROR","DEBUG"};
    for (size_t i = 0; i < 4; i++)
    {
        if (lev[i] == level)
        {
            flag = 1;
            (this->*func[i])();
        }
    }
    if (flag == 0)
        std :: cerr << "Error\n";
}