
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm(): AForm("unknown",72,45)
{
    std :: cout << "RobotomyRequestForm Default constructor called" << std :: endl;
}
RobotomyRequestForm :: RobotomyRequestForm(std :: string target) :AForm("RobotomyRequestForm",72,45),target(target)
{
        std :: cout << "RobotomyRequestForm Parameterized constructor called" << std :: endl;
}
RobotomyRequestForm :: ~RobotomyRequestForm()
{
     std :: cout << "RobotomyRequestForm Destructor called" << std :: endl;
}
RobotomyRequestForm :: RobotomyRequestForm(const RobotomyRequestForm &other)
{
        std :: cout << "RobotomyRequestForm Copy constructor called" << std :: endl;   
        this->target = other.target;
}
RobotomyRequestForm& RobotomyRequestForm :: operator=(const RobotomyRequestForm &other)
{
        std :: cout << "RobotomyRequestForm Copy assignment operator called" << std :: endl;
        if (this != &other)
        {
                this->target = other.target;
        }
        return *this;
}
void RobotomyRequestForm :: drill()const
{
        std :: cout << "drilling noise !!!!!!!" << std :: endl;
}
void RobotomyRequestForm :: timing()const
{
        srand(time(NULL));   
        int r = rand() % 2;
        if (r == 0)
                std :: cout << this->target << "has been robotomized successfully" << std :: endl;
        else if (r == 1)
                throw RobotomyFailedException(); 
}
void RobotomyRequestForm :: execute(Bureaucrat const & executor)const
{
        this->drill();
        if (executor.getGrade() > getGradeToExec())
                throw AForm :: GradeTooLowException();
        if (!this->getSign())
                throw AForm :: isSignedException(); 
        this->timing();
}
