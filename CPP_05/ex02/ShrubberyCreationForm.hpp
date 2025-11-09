#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <exception>
class ShrubberyCreationForm : public AForm
{   
    std :: string target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std :: string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm (const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    class isopenException : public std :: exception
    {
        virtual char const* what() const throw();
    };
    class badStateException : public std :: exception
    {
        virtual char const* what() const throw();
    };
    void openFile()const;
    void execute(Bureaucrat const & executor)const ;
};


#endif