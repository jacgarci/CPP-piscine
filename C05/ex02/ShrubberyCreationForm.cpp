#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry", 145, 137), _target(std::string())
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shruberry", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), _target(src._target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this == &rhs)
        return (*this);
    Form::operator=(rhs);
    _target = rhs._target;
    return (*this);
}

//Exceptions on c++ are always relaunch until a catch. If no catch ->error
void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    action();
}

void    ShrubberyCreationForm::action() const
{
    std::ofstream   file(_target + "_shrubbery", std::ofstream::out | std::ofstream::app);
    std::string const tree[1] = 
    {
    "                           .-'~~~-.\n"
    "                 .'o  oOOOo`.      \n"
    "                :~~~-.oOo   o`.    \n"
    "                 `.   ~-.  oOOo.   \n"
    "                   `.; / ~.  OO:   \n"
    "                   .'  ;-- `.o.'   \n"
    "                 ,'  ; ~~--'~      \n"
    "                 ;  ;              \n" 
    "\\|/________\\;_\\//___\\|/________\n"
    };

    if (!file.good())
        throw OutputFileError();
    file << tree[0];
    file.close();
}

const char* ShrubberyCreationForm::OutputFileError::what() const throw()
{
    return ("Error on output file.");
}