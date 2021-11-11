#include <iostream>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    std::string buff;
    Phonebook phonebook;

    system("clear");
    std::cout << std::endl << "My Aweome Phonebook" << std::endl << std::endl 
    <<"*ADD* to add a contact to the phonebook" << std::endl
    << "*SEARCH* for search a contact" << std::endl
    << "*EXIT* for exiting the program" << std::endl;
    std::getline(std::cin, buff);
    while (buff.compare("EXIT"))
    {
        
        if (!buff.compare("ADD"))
            phonebook.addContact();
        else if (!buff.compare("SEARCH"))
            phonebook.displayContacts();
        std::cout
        << "*ADD* to add a contact to the phonebook" << std::endl
        << "*SEARCH* for search a contact" << std::endl
        << "*EXIT* for exiting the program" << std::endl;
        std::getline(std::cin, buff);
    }
    std::cout << "EXITING" << std::endl;
    return (0);
}