#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class Form
{
    private :
            const std :: string  name;
            bool sign;
            const int gradeToSgin;
            const int gradeToExec;
    public:
            Form();
            Form(std :: string name,const int gradeToSign,const int gradeToSExec);
            Form(const Form &other);
            ~Form();
            Form& operator=(const Form &other);
            std :: string  getName() const ;
            bool getSign() const ;
                int getGradeToSign() const ;
                int  getGradeToExec() const ;
            void beSigned(Bureaucrat &b);
            class GradeTooHighException : public std :: exception{
                public:
                         char const* what() const throw();
            };
            class GradeTooLowException : public std :: exception{
                public:
                         char const* what() const throw();
            };
};
std :: ostream& operator<<(std ::ostream& os,const Form &f);
#endif