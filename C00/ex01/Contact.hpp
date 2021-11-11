#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;

public:
    Contact();
    ~Contact();

    std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhone(void) const;
	std::string	getDarkestSecret(void) const;

    void	setFirstName(std::string value);
    void	setLastName(std::string value);
	void	setNickname(std::string value);
	void	setPhone(std::string value);
	void	setDarkestSecret(std::string value);

    void    setContact();
};

#endif