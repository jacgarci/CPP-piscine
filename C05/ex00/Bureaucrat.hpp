#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <exception>

class Bureaucrat
{
private:
   
    std::string const   _name;
    int                 _grade;
    Bureaucrat();

public:
    
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &src);
    ~Bureaucrat();

    std::string     getName() const;
    int             getGrade() const;

    void    setGrade(int grade);

    Bureaucrat  &operator=(Bureaucrat const &rhs);

    void    incrementGrade();
    void    decrementGrade();

    class   GradeTooHighException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &B);

#endif