#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat mid("Mid", 70);

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Bender");
        PresidentialPardonForm pardon("Arthur");

        
        mid.signForm(robo);
        boss.signForm(pardon);
        boss.signForm(shrub);

        mid.executeForm(robo);
        boss.executeForm(pardon);
        boss.executeForm(shrub);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

