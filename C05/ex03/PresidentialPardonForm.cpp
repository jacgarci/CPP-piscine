#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5), _target(std::string())
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src), _target(src._target)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this == &rhs)
        return (*this);
    Form::operator=(rhs);
    _target = rhs._target;
    return (*this);
}

//Exceptions on c++ are always relaunch until a catch. If no catch ->error
void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    action();
}

void    PresidentialPardonForm::action() const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}