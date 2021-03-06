#include "Karen.hpp"

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void    Karen::complain(std::string level)
{
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Karen::*fncPtr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for (int i = 0; i < 4; i++)
        if (level == lvl[i])
            (this->*fncPtr[i])();

}

void    Karen::debug(void)
{
    std::cout 
    << "[ DEBUG ]" << std::endl
    << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
    << "I just love it!\n" << std::endl;
}

void    Karen::info(void)
{
    std::cout 
    << "[ INFO ]" << std::endl
    << "I cannot believe adding extra bacon cost more money." << std::endl
    << "You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void    Karen::warning(void)
{
    std::cout 
    << "[ WARNING ]" << std::endl
    << "I think I deserve to have some extra bacon for free." << std::endl
    << "I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void    Karen::error(void)
{
    std::cout 
    << "[ ERROR ]" << std::endl
    << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}