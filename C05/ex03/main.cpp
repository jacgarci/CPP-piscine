#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Form		*form;
	Bureaucrat	john("John", 5);
	Intern		intern;

	try
	{
		form = intern.makeForm("shrubbery", "house");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form = intern.makeForm("shrubbery creation", "house");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		form = intern.makeForm("robotomy request", "John");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form = intern.makeForm("presidential pardon", "Micheal");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}