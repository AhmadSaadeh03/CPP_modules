#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class AForm
{
    private :
            const std :: string  name;
            bool sign;
            const int gradeToSgin;
            const int gradeToExec;
    public:
            AForm();
            AForm(std :: string name,const int gradeToSign,const int gradeToSExec);
            AForm(const AForm &other);
            virtual ~AForm();
            AForm& operator=(const AForm &other);
            std :: string  getName() const ;
            bool getSign() const ;
                int getGradeToSign() const ;
                int  getGradeToExec() const ;
            void beSigned(Bureaucrat &b) ;
            class GradeTooHighException : public std :: exception{
                public:
                        virtual char const* what() const throw();
            };
            class GradeTooLowException : public std :: exception{
                public:
                         char const* what() const throw();
            };
            class isSignedException : public std :: exception{
                public:
                         char const* what() const throw();
            };
            class RobotomyFailedException : public std :: exception
            {
                public:
                         char const* what() const throw();
            };
            virtual void execute(Bureaucrat const & executor) const = 0;
};
std :: ostream& operator<<(std ::ostream& os,const AForm &f);
#endif