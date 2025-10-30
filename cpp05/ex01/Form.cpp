#include "Form.hpp"

Form :: Form() : name("unknown"),sign(false),gradeToExec(0),gradeToSgin(0)
{
    std :: cout << "Form Default constructor called" << std :: endl;
     if (gradeToExec > 150 || gradeToSgin)
            throw GradeTooLowException();
        else if (gradeToExec < 1 || gradeToSgin)
            throw GradeTooHighException();
}
Form :: Form(std :: string name,const int gradeToSign,const int gradeToSExec) : name(name),gradeToSgin(gradeToSgin),gradeToExec(gradeToSExec),sign(false)
{
    std :: cout << "Form Parameterized constructor called" << std :: endl;
     if (gradeToExec > 150 || gradeToSgin)
            throw GradeTooLowException();
        else if (gradeToExec < 1 || gradeToSgin)
            throw GradeTooHighException();
}
Form :: Form(const Form &other) : name(other.name),sign(false),gradeToExec(other.gradeToExec),gradeToSgin(other.gradeToSgin)
{
    std :: cout << "Form Copy constructor called" << std :: endl;
}
Form :: ~Form()
{
    std :: cout << "Form Destructor called" << std :: endl;
}
Form& Form :: operator=(const Form &other)
{
    if (this != &other)
    {
        this->sign = other.sign;
        std :: cout << "Form operator= called" << std :: endl;
    }
}

const std :: string  Form :: getName() const 
{
    return this->name;
}
bool Form :: getSign() const 
{
    return this->sign;
}
const int Form :: getGradeToSign() const 
{
    return this->gradeToSgin;
}
const int Form :: getGradeToExec() const
{
    return this->gradeToExec;
}
void Form :: beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->gradeToSgin)
        this->sign = true;
    else
        throw Form :: GradeTooLowException();
    
}