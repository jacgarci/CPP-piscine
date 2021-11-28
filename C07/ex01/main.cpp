#include "Iter.hpp"



int main()
{
    int a[] = {1, 2, 3 , 4};
    std::string b[] = {"Hoña", "Shoy", "Joña"};

    iter(a, 4, display);
    iter(b, 3, display);
}

