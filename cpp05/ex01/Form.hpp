#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Form : public Bureaucrat
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
            const std :: string  getName() const ;
            bool getSign() const ;
            const int getGradeToSign() const ;
            const int  getGradeToExec() const ;
            void beSigned(Bureaucrat &b);
};
std :: ostream& operator<<(std ::ostream& os,const Bureaucrat &b);
#endif