#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(0), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{

}

std::string    Bureaucrat::getName() const
{
    return (this->_name);
}

int    Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_grade = rhs._grade;
    return (*this);
}

void    Bureaucrat::incrementGrade()
{
    setGrade(getGrade() - 1);
}

void    Bureaucrat::decrementGrade()
{
    setGrade(getGrade() + 1);
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high\n");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &B)
{
    o << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
    return (o);
}