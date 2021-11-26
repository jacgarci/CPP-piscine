#include <iostream>
#include <string>
#include <limits>

static void executeConversion(std::string const &argument, int const &type)
{
    switch (type)
    {
    case 0:
        //convertChar(argument[0])
        break;
    case 1:
        //convertInt(std::stoi(argument))
        break;
    case 2:
        //convertFloat(std::stof(argument))
        break;
    case 3:
        //convertDouble(std::stod(argument))
        break;
    
    default:
        std::cout << "Not a valid type." << std::endl;
        break;
    }
}

static bool isDouble(std::string const &argument)
{
    int dot = 0;

    for (size_t i = 0; i < argument.length(); i++)
    {
        if (!isdigit(argument[i]) && argument[i] != '.')
            return (false);
        if (argument[i] == '.')
            dot += 1;
    }
    if (dot != 1)
        return (false);
    try
    {
        std::stod(argument);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Number out of double limit. ";
        return (false);
    }
    return (true);
}

static bool isFloat(std::string const &argument)
{
    int     dot = 0;
    int     f = 0;
    int     digits = 0;

    for (size_t i = 0; i < argument.length(); i++)
    {
        if (!isdigit(argument[i]) && argument[i] != '.' && argument[i] != 'f')
            return (false);
        if (argument[i] == '.')
            dot += 1;
        if (argument[i] == 'f')
            f += 1;
        if (isdigit(argument[i]))
            digits += 1;
    }
    if (dot != 1 || f != 1 || argument[argument.length() - 1] != 'f' || !digits)
        return (false);
    try
    {
        std::stof(argument);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Number out of float limit. ";
        return (false);
    }  
    return (true);
}

static bool isInt(std::string const &argument)
{
    for (size_t i = 0; i < argument.length(); i++)
        if (!isdigit(argument[i]))
            return (false);
    try
    {
        std::stoi(argument);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Number out of int limit. ";
        return (false);
    }
    
    return (true);
}

static bool isChar(std::string const &argument)
{
    if (argument.length() == 1 && (argument[0] > 31 && argument[0] < 127))
        return (true);
    return (false);
}

static int getType(std::string const &argument)
{
    if (isChar(argument))
        return (0);
    if (isInt(argument))
        return (1);
    if (isFloat(argument))
        return (2);
    if (isDouble(argument))
        return (3);
    return (4);
}

static bool checkArgs(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (false);
    }
    std::string const str(argv[1]);
    if (str.empty())
    {
        std::cout << "Argument cant be empty" << std::endl;
        return (false);
    }
    if (str.length() == 1 && (str[0] < 32 || str[0] > 126))
    {
        std::cout << "Non displayable char passed as argument. Exiting" << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char **argv)
{
    if (!checkArgs(argc, argv))
        return (0);

    std::string const arg(argv[1]);
    int type;

    type = getType(arg);
    executeConversion(arg, type); 
    return (1);
}