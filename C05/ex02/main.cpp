#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    //Form    b("a", 1, 1);
    Bureaucrat bob("bob", 1);
    ShrubberyCreationForm a("a");
    RobotomyRequestForm b("b");
    PresidentialPardonForm c("c");
    

    bob.signForm(a);
    bob.signForm(b);
    bob.signForm(c);
    bob.executeForm(a);
    bob.executeForm(b);
    bob.executeForm(c);
    //a.execute(bob);
    return 0;
}