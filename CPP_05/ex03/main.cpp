#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Creating Intern and Bureaucrats ===\n";
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 45);

    try
    {
        std::cout << "\n=== Test 1: ShrubberyCreationForm ===\n";


        AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "garden");
        boss.signForm(*shrub);
        boss.executeForm(*shrub);
        delete shrub;
    }
    catch (const std::exception &e)
    {
        std::cerr << "[Shrubbery Test Error] " << e.what() << '\n';
    }
    try
    {
        std::cout << "\n=== Test 2: RobotomyRequestForm ===\n";
        AForm* robo = someRandomIntern.makeForm("robotomy request", "Bender");
        mid.signForm(*robo);
        mid.executeForm(*robo);
        delete robo;
    }
    catch (const std::exception &e)
    {
        std::cerr << "[Robotomy Test Error] " << e.what() << '\n';
    }

    try
    {
        std::cout << "\n=== Test 3: PresidentialPardonForm ===\n";
        AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\n=== Test 4: Invalid form name ===\n";
        AForm* invalid = someRandomIntern.makeForm("coffee request", "Target");
        delete invalid; // will be nullptr, safe to delete
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n=== All tests completed ===\n";
    return 0;
}
