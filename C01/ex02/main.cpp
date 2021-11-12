#include <iostream>
#include <iomanip>

int main(void)
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout 
    << "|" << std::setw(50) << std::setfill('*') << "|" << std::setfill(' ') << std::endl
    << "|" << std::setw(10) << "Variable|" << std::setw(17) << "Memory Address" << "|" << std::setw(21) << "Content" << "|" << std::endl
    << "|" << std::setw(50) << std::setfill('*') << "|" << std::setfill(' ') << std::endl
    << "|" << std::setw(10) << "String|" << std::setw(17) << &str << "|" << std::setw(21) << str << "|" << std::endl
    << "|" << std::setw(10) << "StringPTR|" << std::setw(17) << stringPTR << "|" << std::setw(21) << *stringPTR << "|" << std::endl
    << "|" << std::setw(10) << "StringREF|" << std::setw(17) << &stringREF << "|" << std::setw(21) << stringREF << "|" << std::endl
    << "|" << std::setw(50) << std::setfill('*') << "|" << std::setfill(' ') << std::endl;
}