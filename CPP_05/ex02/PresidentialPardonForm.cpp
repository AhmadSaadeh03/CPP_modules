#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm() : AForm("unknown",25,5)
{
    std :: cout << "PresidentialPardonForm Default constructor called" << std :: endl;
}
PresidentialPardonForm :: PresidentialPardonForm(std :: string target) : AForm("PresidentialPardonForm",25,5),target(target)
{
    std :: cout << "PresidentialPardonForm Parameterized constructor called" << std :: endl;
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
     std :: cout << "PresidentialPardonForm Destructor called" << std :: endl;
}
PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm &other)
{
        std :: cout << "PresidentialPardonForm Copy constructor called" << std :: endl;
        this->target = other.target;
        
}
PresidentialPardonForm& PresidentialPardonForm :: operator=(const PresidentialPardonForm &other)
{
        std :: cout << "PresidentialPardonForm Copy assignment operator called" << std :: endl;
        if (this != &other)
        {
                this->target = other.target;
        }
        return *this;
}
void PresidentialPardonForm :: pardoned() const
{
        std :: cout << target << " has been pardoned by Zaphod Beeblebrox" << std :: endl;        
}
void PresidentialPardonForm :: execute(Bureaucrat const & executor)const
{
        if (executor.getGrade() > getGradeToExec())
                throw AForm :: GradeTooLowException();
        else if (!getSign())
                throw AForm :: isSignedException(); 
        this->pardoned();
}