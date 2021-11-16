#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void pressEnter()
{
    std::string buff;

    std::cout << "\nPress enter to continue";
    std::getline(std::cin, buff);
    system("clear");
}

static std::string formatString(std::string str)
{
    std::string result;
    if (str.length() > 9)
    {
        result.append(str, 0, 8);
        result.append(1u, '.');
        return (result);
    }
    return (str);
}

static void getClapTrapInfo(ClapTrap const &c)
{
    std::cout 
    << "|" << std::setfill('*') << std::setw(34) << "|" << std::endl
    << std::setfill(' ') << "|" 
    << std::setw(10) << "Name|"  << std::setw(8) << "HP|" 
    << std::setw(8) << "Energy|" << std::setw(8) << "AD|" << std::endl
    << "|" << std::setfill('*') << std::setw(34) << "|" << std::endl
    << std::setfill(' ') << "|" 
    << std::setw(10) << formatString(c.getName()).append("|")
    << std::setw(7) << c.getHitPoints() << "|" 
    << std::setw(7) << c.getEnergyPoints() << "|"
    << std::setw(7) << c.getAttackDamage() << "|" << std::endl
    << "|" << std::setfill('*') << std::setw(34) << "|" << std::endl
    << std::endl;
}

int main(void)
{
    DiamondTrap uselessScavTrap("diamond");
    DiamondTrap copy(uselessScavTrap);
    DiamondTrap equal = copy;

    pressEnter();
    getClapTrapInfo(uselessScavTrap);
    getClapTrapInfo(copy);
    getClapTrapInfo(equal);
   
    pressEnter();
    uselessScavTrap.attack(copy.getName());
    copy.takeDamage(uselessScavTrap.getAttackDamage());
    copy.beRepaired(10);
    while (uselessScavTrap.getEnergyPoints() > 0 && copy.getHitPoints() > 0)
    {
        uselessScavTrap.attack(copy.getName());
        copy.takeDamage(uselessScavTrap.getAttackDamage());
    }
    uselessScavTrap.guardGate();
    copy.highFivesGuys();
    equal.whoAmI();
    pressEnter();
    getClapTrapInfo(uselessScavTrap);
    getClapTrapInfo(copy);
    pressEnter();
}