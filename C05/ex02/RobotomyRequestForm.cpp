#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45), _target(std::string())
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequest", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), _target(src._target)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this == &rhs)
        return (*this);
    Form::operator=(rhs);
    _target = rhs._target;
    return (*this);
}

//Exceptions on c++ are always relaunch until a catch. If no catch ->error
void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    action();
}

void    RobotomyRequestForm::action() const
{
    int ran = 0;

	std::cout << "Driling noises..." << std::endl;
	srand( time(0) );
	ran = ( rand() % 100 );
	if ( ran > 50 )
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		throw AttemptToRobotomizeFailed();
}

const char* RobotomyRequestForm::AttemptToRobotomizeFailed::what() const throw()
{
    return ("Attempt to robotomize failed.");
}