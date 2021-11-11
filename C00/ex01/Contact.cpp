#include "Contact.hpp"

Contact::Contact(void)
{
    this->_firstName = std::string();
    this->_lastName = std::string();
    this->_nickname = std::string();
    this->_phone = std::string();
    this->_darkestSecret = std::string();
}

Contact::~Contact()
{

}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void Contact::setFirstName(std::string value)
{
	this->_firstName = value;
}

void Contact::setLastName(std::string value)
{
	this->_lastName = value;
}

void Contact::setNickname(std::string value)
{
	this->_nickname = value;
}

void Contact::setPhone(std::string value)
{
	this->_phone = value;
}

void Contact::setDarkestSecret(std::string value)
{
	this->_darkestSecret = value;
}

void Contact::setContact()
{
	std::string buff;

	std::cout << "First Name:";
	std::getline(std::cin, buff);
	this->setFirstName(buff);
	std::cout << "Last Name:";
	std::getline(std::cin, buff);
	this->setLastName(buff);
	std::cout << "Nickname:";
	std::getline(std::cin, buff);
	this->setNickname(buff);
	std::cout << "Phone:";
	std::getline(std::cin, buff);;
	this->setPhone(buff);
	std::cout << "Darkest Secret:";
	std::getline(std::cin, buff);
	this->setDarkestSecret(buff);
}
