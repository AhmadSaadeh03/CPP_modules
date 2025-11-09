#include "Form.hpp"

Form :: Form() : name("unknown"),sign(false),gradeToSgin(150),gradeToExec(150)
{
    std :: cout << "Form Default constructor called" << std :: endl;
}
Form :: Form(std :: string name,const int setgradesign,const int setgradeExec) : name(name),sign(false),gradeToSgin(setgradesign),gradeToExec(setgradeExec)
{
    std :: cout << "Form Parameterized constructor called" << std :: endl;
     if (gradeToExec > 150 || gradeToSgin > 150 )
            throw Form ::GradeTooLowException();
        else if (gradeToExec < 1 || gradeToSgin < 1)
            throw Form :: GradeTooHighException();
}
Form :: Form(const Form &other) : name(other.name),sign(false),gradeToSgin(other.gradeToSgin),gradeToExec(other.gradeToExec)
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
        std :: cout << "Form Copy assignment operator called" << std :: endl;
    }
    return *this;
}

 std :: string  Form :: getName() const 
{
    return this->name;
}
bool Form :: getSign() const 
{
    return this->sign;
}
 int Form :: getGradeToSign() const 
{
    return this->gradeToSgin;
}
 int Form :: getGradeToExec() const
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
std :: ostream& operator<<(std ::ostream& os,const Form &f)
{
    std :: string s = "";
    if (f.getSign() == 1)
        s = "True";
    else
        s = "False";
    os << "Form name : " << f.getName() << " | The sign : "<< s << " | Grade to sign : " << f.getGradeToSign()<< " | grade to exec :" << f.getGradeToExec() << std ::endl;
    return os;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "Form Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form Grade too low";
}