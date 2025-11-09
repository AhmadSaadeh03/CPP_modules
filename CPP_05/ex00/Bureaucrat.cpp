#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat() : name("Unknown") ,grade(150)
{
    std :: cout << "Bureaucrat Defualt constructor called" << std :: endl;
}
Bureaucrat :: Bureaucrat(const std :: string name,int grade) : name(name) , grade(grade)
{
    std :: cout << "Bureaucrat parameterized constructor called" << std :: endl;
     if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
}
Bureaucrat :: Bureaucrat(const Bureaucrat &other)
{
    std :: cout << "Bureaucrat Copy constructor called" << std :: endl;
    this->grade = other.grade;
}
Bureaucrat :: ~Bureaucrat()
{
    std :: cout << "Bureaucrat Destructor called" << std :: endl;
}
Bureaucrat& Bureaucrat ::  operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        std :: cout << "Bureaucrat Copy assignment operator called" << std :: endl;
        this->grade = other.grade;
    }
    return *this;
}
const std :: string Bureaucrat ::  getName() const 
{
    return this->name;
}
int  Bureaucrat :: getGrade()const
{
    return this->grade;
}

char const* Bureaucrat :: GradeTooHighException :: what() const throw()
{
    return "The grade is too high";
};
char const* Bureaucrat :: GradeTooLowException :: what() const throw()
{
    return "The grade is too low";
};

std :: ostream& operator<<(std ::ostream& os,const Bureaucrat &b)
{
    os << b.getName() << " bureaucrat grade " << b.getGrade();
    return os;
}
void Bureaucrat :: incrementBureaucrat()
{
    this->grade-=1;
    if (this->grade > 150)
            throw GradeTooLowException();
    else if (this->grade < 1)
            throw GradeTooHighException();
}
void Bureaucrat :: decrementBureaucrat()
{
    this->grade+=1;
    if (this->grade > 150)
            throw GradeTooLowException();
    else if (this->grade < 1)
            throw GradeTooHighException();
}
