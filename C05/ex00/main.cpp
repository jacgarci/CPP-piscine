#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  Camille("Camille", 42);
    
    std::cout << Camille << std::endl;
	std::cout << "-- Setting grade to 151 --" << std::endl;
    try
    {
        Camille.setGrade(151);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << Camille << std::endl;
	std::cout << "-- Setting grade to -1 --" << std::endl;
    try
    {
        Camille.setGrade(-1);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << Camille << std::endl;
	std::cout << "-- Setting grade to 1 --" << std::endl;
    try
    {
        Camille.setGrade(1);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << Camille << std::endl;
	std::cout << "-- incrementing grade --" << std::endl;
    try
    {
        Camille.incrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << Camille << std::endl;
	std::cout << "-- Setting grade to 150 --" << std::endl;
    try
    {
        Camille.setGrade(150);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << Camille << std::endl;
	std::cout << "-- decrementing grade --" << std::endl;
    try
    {
        Camille.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
    
}