#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int cont;
    int i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        cont = 1;
        while (cont < argc)
        {
            i = 0;
            while (argv[cont][i])
            {
                std::cout << (char) toupper(argv[cont][i]);
                i++;
            }
            cont++;
        }
        std::cout << std::endl;
    }
    return (1);
}