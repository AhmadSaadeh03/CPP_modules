#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class Bureaucrat
{
    const std :: string name;
    int grade ;
    public :
            Bureaucrat();
            Bureaucrat(const std :: string name,int grade );
            Bureaucrat(const Bureaucrat &other);
            ~Bureaucrat();
            Bureaucrat& operator=(const Bureaucrat &other);
            const std :: string getName()const;
            int getGrade()const;
            void incrementBureaucrat();
            void decrementBureaucrat();
            class GradeTooHighException :public std :: exception{
                public:
                        virtual char const* what() const throw(); // means what() promises not to throw any exceptions at all.
                                                            // what() is supposed to describe the exception — not throw another one.
            };
            class GradeTooLowException : public std :: exception{
                public:
                        virtual char const* what() const throw();
            };
};

std :: ostream& operator<<(std ::ostream& os,const Bureaucrat &b);
#endif