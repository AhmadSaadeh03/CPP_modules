#include "AForm.hpp"

AForm :: AForm() : name("unknown"),sign(false),gradeToSgin(150),gradeToExec(150)
{
    std :: cout << "AForm Default constructor called" << std :: endl;
}
AForm :: AForm(std :: string name,const int setgradesign,const int setgradeExec) : name(name),sign(false),gradeToSgin(setgradesign),gradeToExec(setgradeExec)
{
    std :: cout << "AForm Parameterized constructor called" << std :: endl;
     if (gradeToExec > 150 || gradeToSgin > 150 )
            throw AForm ::GradeTooLowException();
        else if (gradeToExec < 1 || gradeToSgin < 1)
            throw AForm :: GradeTooHighException();
}
AForm :: AForm(const AForm &other) : name(other.name),sign(false),gradeToSgin(other.gradeToSgin),gradeToExec(other.gradeToExec)
{
    std :: cout << "AForm Copy constructor called" << std :: endl;
}
AForm :: ~AForm()
{
    std :: cout << "AForm Destructor called" << std :: endl;
}
AForm& AForm :: operator=(const AForm &other)
{
    if (this != &other)
    {
        this->sign = other.sign;
        std :: cout << "AForm Copy assignment operator called" << std :: endl;
    }
    return *this;
}

 std :: string  AForm :: getName() const 
{
    return this->name;
}
bool AForm :: getSign() const 
{
    return this->sign;
}
 int AForm :: getGradeToSign() const 
{
    return this->gradeToSgin;
}
 int AForm :: getGradeToExec() const
{
    return this->gradeToExec;
}
void AForm :: beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->gradeToSgin)
        this->sign = true;
    else
        throw AForm :: GradeTooLowException();
    
}
std :: ostream& operator<<(std ::ostream& os,const AForm &f)
{
    std :: string s = "";
    if (f.getSign() == 1)
        s = "True";
    else
        s = "False";
    os << "AForm name : " << f.getName() << " | The sign : "<< s << " | Grade to sign : " << f.getGradeToSign()<< " | grade to exec :" << f.getGradeToExec() << std ::endl;
    return os;
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm Grade too low";
}
const char *AForm::isSignedException::what() const throw()
{
    return "the sign is false";
}
const char *AForm::RobotomyFailedException::what() const throw()
{
    return "failure robotomized";
}