#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
Intern :: Intern() 
{
    std :: cout << "Intern Default constructor called" << std :: endl;
}
Intern :: ~Intern()
{
     std :: cout << "Intern Destructor called" << std :: endl;
     
}
Intern :: Intern(const Intern &other)
{
        (void)other;
        std :: cout << "Intern Copy constructor called" << std :: endl;       
}
Intern& Intern :: operator=(const Intern &other)
{
        (void)other;
        std :: cout << "Intern Copy assignment operator called" << std :: endl;
        return *this;
}
AForm* Intern :: makeForm(std :: string nameForm , std :: string targetForm)
{
    int save = -1;
    AForm *f = NULL;
    std :: string str[3] = {"robotomy request","shrubbery creation", "presidential pardon"};
    for (size_t i = 0; i < 3; i++)
    {
        if (nameForm == str[i])
            save = i;
    }
    switch (save)
    {
    case 0:
        f = new RobotomyRequestForm(targetForm);
        break;
    case 1:
        f = new ShrubberyCreationForm(targetForm);
        break;
    case 2:
        f = new PresidentialPardonForm(targetForm);
        break;
    default:  
        throw ExistFormException();
        break;
    }
    std :: cout << "Intern creates " << str[save] << std :: endl;
    return f;
      
}
char const* Intern :: ExistFormException :: what() const throw()
{
    return "the Form doesn't exist";
};