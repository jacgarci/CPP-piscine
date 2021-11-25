#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern()
{

}

Intern  &Intern::operator=(Intern const &rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

Form    *Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
    std::string const formNames[3] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    Form * ( Intern::*fPoint[3] )(std::string const &) =
	{
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};

    for (int i = 0; i < 3; i++)
         if (!formName.compare(formNames[i]))
              return (this->*fPoint[i])(formTarget);
    throw UnknownRequestedForm();
    return (0);
    
}

Form* Intern::makeShrubbery( std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy( std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

const char* Intern::UnknownRequestedForm::what() const throw()
{
    return ("Requested form unknown.");
}