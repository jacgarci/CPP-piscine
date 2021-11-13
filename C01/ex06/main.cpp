#include "Karen.hpp"

static void activateFilter(int level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Karen karen;
    for (int i = level; i < 4; i++)
        karen.complain(levels[i]);
}

static int  getLevel(char *argv)
{
    std::string filter(argv);
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level = 5;
    for (int i = 0; i < 4; i++)
        if (filter == levels[i])
            level = i;
    return (level);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    
    switch (getLevel(argv[1]))
    {
        case (0):
            activateFilter(0);
        break;
        case (1):
            activateFilter(1);
        break;
        case (2):
            activateFilter(2);
        break;
        case (3):
            activateFilter(3);
        break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
    }

}