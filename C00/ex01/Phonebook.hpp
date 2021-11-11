#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

class Phonebook
{
private:
    int     _oldest;
    int     _numContAdded;
    Contact _contacts[8];
public:
    Phonebook();
    ~Phonebook();

    int     getOld(void) const;
    int     getNumContAdded(void) const;

    void    setOld(int old);
    void    setNumContAdded(int num);

    void    addContact();
    void    displayContacts();
    void    displayContactInfo(int index);
    int     checkIndex(std::string str);
    std::string formatString(std::string str);

};

#endif