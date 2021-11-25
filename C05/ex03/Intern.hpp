#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form* makeShrubbery(std::string const & target);
		Form* makeRobotomy(std::string const & target);
		Form* makePresidential(std::string const & target);

	public:
		Intern();
		Intern(Intern const & other);
virtual	~Intern();

		class UnknownRequestedForm : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		Intern & operator= (Intern const & other);

		Form*  makeForm(std::string const & name_form, std::string const & target_name);
};

#endif