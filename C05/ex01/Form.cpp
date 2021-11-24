#include "Form.hpp"

Form::Form() : _name(std::string()), _signed(false), _gradeSign(1), _gradeExecute(1)
{

}

Form::Form(std::string const &name, int const &gradeSign, int const &gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
    *this = src;
}

Form::~Form()
{

}

std::string Form::getName() const
{
    return (_name);
}

bool    Form::getSign() const
{
    return (_signed);
}

int Form::getGradeSign() const
{
    return (_gradeSign);
}

int Form::getGradeExecute() const
{
    return (_gradeExecute);
}

Form    &Form::operator=(Form const &rhs)
{
    if (this == &rhs)
        return (*this);
    _signed = rhs._signed;
    return (*this);
}

void    Form::beSigned(Bureaucrat const &B)
{
    if (B.getGrade() > _gradeSign)
        throw   GradeTooLowException();
    _signed = true;
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream    &operator<<(std::ostream &o, Form const &F)
{
    o << F.getName() << ", form. Grade to sign: " << F.getGradeSign() 
    << ". Grade to execute: " << F.getGradeExecute() 
    << ". Signed: " << F.getSign();
    return (o);
}