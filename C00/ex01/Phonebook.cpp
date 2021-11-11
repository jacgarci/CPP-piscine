#include "Phonebook.hpp"


Phonebook::Phonebook() : _oldest(0), _numContAdded(0)
{
    
}

Phonebook::~Phonebook()
{

}

int     Phonebook::getOld() const
{
    return (this->_oldest);
}

int     Phonebook::getNumContAdded() const
{
    return (this->_numContAdded);
}

void    Phonebook::setOld(int old)
{
    this->_oldest = old;
}

void    Phonebook::setNumContAdded(int num)
{
    this->_numContAdded = num;
}

void    Phonebook::addContact()
{
    if (getNumContAdded() > 7)
    {
        if (getOld() == 8)
            setOld(0);
        _contacts[getOld()].setContact();
        setOld(getOld() + 1);
    }
    else
        _contacts[getNumContAdded()].setContact();
    if (getNumContAdded() < 8)
        setNumContAdded(getNumContAdded() + 1);
}

void    Phonebook::displayContacts()
{
    std::string index;

    std::cout << "|" << std::setw(44) << std::setfill('-') << "|" << std::endl
    << "|" << std::setw(11) << std::setfill(' ') << "Index|"
    << std::setw(11) << "First name|"
    << std::setw(11) << "Last name|"
    << std::setw(11) << "Nickname|" << std::endl
    << "|" << std::setw(44) << std::setfill('-') << "|" << std::endl;
    for (int i = 0; i < getNumContAdded(); i++)
    {
        std::cout << "|" << std::setfill(' ') << std::setw(10) << i 
        << "|" << std::setw(10) << formatString(this->_contacts[i].getFirstName())
        << "|" << std::setw(10) << formatString(this->_contacts[i].getLastName())
        << "|" << std::setw(10) << formatString(this->_contacts[i].getNickname())
        << "|" << std::endl 
        << "|" << std::setw(44) << std::setfill('-') << "|" <<std::endl;
    }
    if (getNumContAdded() > 0)
    {
        std::cout << "Enter contact´s index to search: ";
        std::cin >> index;
        switch (checkIndex(index))
        {
        case 0:
            displayContacts();
            break;
        
        default:
            displayContactInfo(atoi(index.c_str()));
            break;
        }
    }
}

std::string Phonebook::formatString(std::string str)
{
    std::string result;
    if (str.length() > 10)
    {
        result.append(str, 0, 9);
        result.append(1u, '.');
        return (result);
    }
    return (str);
    
}

void    Phonebook::displayContactInfo(int index)
{
    std::cout 
    << "First Name    : " << this->_contacts[index].getFirstName() << std::endl
    << "Last Name     : " << this->_contacts[index].getLastName() << std::endl
    << "Nickname      : " << this->_contacts[index].getNickname() << std::endl
    << "Phone         : " << this->_contacts[index].getPhone() << std::endl
    << "Darkes Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
}

int     Phonebook::checkIndex(std::string str)
{
    for (int i = 0; i < (int) str.length(); i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    if (atoi(str.c_str()) < 0 || atoi(str.c_str()) > getNumContAdded() - 1)
        return (0);
    return (1);
}