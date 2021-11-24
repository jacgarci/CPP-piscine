#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  *Camille = new Bureaucrat("Camille", 42);
    Form        *a = new Form("28C", 41, 1);
    
    std::cout << *Camille << std::endl;
    std::cout << *a << std::endl;
    Camille->signForm(*a);
    Camille->incrementGrade();
    std::cout << *Camille << std::endl;
    Camille->signForm(*a);
    std::cout << *a << std::endl;

    try
    {
        Form        *b = new Form("28C", 1, 151); 
        std::cout << *b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}