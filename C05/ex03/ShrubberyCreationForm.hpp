#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    
    std::string _target;
    ShrubberyCreationForm();

public:

    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &rhs);

   void     execute(Bureaucrat const &executor) const;
   void     action() const;

   class   OutputFileError : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };   
};

//sobreescribe operador <<

#endif