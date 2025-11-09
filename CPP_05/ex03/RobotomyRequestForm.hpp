#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time() if you want to seed the generator

class RobotomyRequestForm : public AForm
{
    std :: string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std :: string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        void drill()const;
        void timing()const;
        void execute(Bureaucrat const & executor)const ;

};


#endif