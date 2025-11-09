#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm :: ShrubberyCreationForm(): AForm("unknown",145,137)
{
    std :: cout << "ShrubberyCreationForm Default constructor called" << std :: endl;
}
ShrubberyCreationForm :: ShrubberyCreationForm(std :: string target) : AForm("ShrubberyCreationForm",145,137),target(target)
{
    std :: cout << "ShrubberyCreationForm Parameterized constructor called" << std :: endl;
}
ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
     std :: cout << "ShrubberyCreationForm Destructor called" << std :: endl;
}
ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
        std :: cout << "ShrubberyCreationForm Copy constructor called" << std :: endl;
        this->target = other.target;        
}
ShrubberyCreationForm& ShrubberyCreationForm :: operator=(const ShrubberyCreationForm &other)
{
        std :: cout << "ShrubberyCreationForm Copy assignment operator called" << std :: endl;
        if (this != &other)
        {
            this->target = other.target;
        }
        return *this;
}

char const* ShrubberyCreationForm :: isopenException :: what() const throw()
{
    return "Error in opening file";
}
char const* ShrubberyCreationForm :: badStateException :: what() const throw()
{
    return "Error : file failed";
}
void ShrubberyCreationForm :: openFile()const
{
     try
    {
        std :: string str = target + "_shrubbery";
        std :: ofstream file(str.c_str());
        if (!file)
        throw badStateException();
        if(!file.is_open())
            throw isopenException();
        file << "   *\n";
        file << "  ***\n";
        file << " *****\n";
        file << "*******\n";
        file << "  |||\n";
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
void ShrubberyCreationForm :: execute(Bureaucrat const & executor)const
{
    if (executor.getGrade() > getGradeToExec())
        throw AForm :: GradeTooLowException(); //  throw not inside any try Program terminates with std::terminate()
    else if (!getSign())
        throw AForm :: isSignedException();
    this->openFile();
}