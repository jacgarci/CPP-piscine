#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = std::string();
}

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie()
{
    if (this->_name.compare(""))
        std::cout << this->_name << " has gone" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}