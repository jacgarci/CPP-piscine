#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    int myInts[] = {4, 8, 15, 16, 23, 42};
    std::list<int>      lst(myInts, myInts + sizeof(myInts) / sizeof(int));
    std::vector<int>    vct(myInts, myInts + sizeof(myInts) / sizeof(int));
    int result;

    try
    {
        result = easyfind(lst, 0);
        std::cout << result << " found on list" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Value not found on list" << std::endl;
    }
    try
    {
        result = easyfind(vct, 16);
        std::cout << result << " found on vector" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Value not found on vector" << std::endl;
    }
    
}