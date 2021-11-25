#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    
    std::string _target;
    RobotomyRequestForm();

public:

    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm   &operator=(RobotomyRequestForm const &rhs);

   void     execute(Bureaucrat const &executor) const;
   void     action() const;

   class   AttemptToRobotomizeFailed : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };
};

//sobreescribe operador <<

#endif