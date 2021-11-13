#include "Karen.hpp"

int main(void)
{
    Karen karenComplaing;
    std::string level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i< 4; i++)
        karenComplaing.complain(level[i]);
}