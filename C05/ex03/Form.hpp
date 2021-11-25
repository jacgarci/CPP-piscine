#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    
    std::string const   _name;
    bool                _signed;
    int const           _gradeSign;
    int const           _gradeExecute;
    Form();

public:

    Form(std::string const &name, int const &gradeSign, int const &gradeExecute);
    Form(Form const &src);
    virtual ~Form();

    std::string         getName() const;
    bool                getSign() const;
    int                 getGradeSign() const;
    int                 getGradeExecute() const;

    Form    &operator=(Form const &rhs);

    void                beSigned(Bureaucrat const &B);
    virtual void        execute(Bureaucrat const &executor) const = 0;
    virtual void        action() const = 0;

    class   GradeTooHighException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class   FormNotSigned : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Form const &F);

#endif