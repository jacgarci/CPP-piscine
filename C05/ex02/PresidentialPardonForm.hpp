#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    
    std::string _target;
    PresidentialPardonForm();

public:

    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm   &operator=(PresidentialPardonForm const &rhs);

   void     execute(Bureaucrat const &executor) const;
   void     action() const;

};

//sobreescribe operador <<

#endif