#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    if (str.length() > 10)
    {
        result.append(str, 0, 9);
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
    FragTrap yellowClapTrap("Yellow");
    ScavTrap suitedClapTrap("Suited");
    FragTrap blueScavTrap(yellowClapTrap);

    getClapTrapInfo(yellowClapTrap);
    getClapTrapInfo(suitedClapTrap);
    pressEnter();
    yellowClapTrap.attack(suitedClapTrap.getName());
    suitedClapTrap.takeDamage(yellowClapTrap.getAttackDamage());
    suitedClapTrap.beRepaired(10);
    while (yellowClapTrap.getEnergyPoints() > 0 && suitedClapTrap.getHitPoints() > 0)
    {
        yellowClapTrap.attack(suitedClapTrap.getName());
        suitedClapTrap.takeDamage(yellowClapTrap.getAttackDamage());
    }
    yellowClapTrap.highFivesGuys();
    pressEnter();
    getClapTrapInfo(yellowClapTrap);
    getClapTrapInfo(suitedClapTrap);
    pressEnter();
}