#include <iostream>
#include "Functions.hpp"

int main()
{
    int i = 2;
    int j = 1;

    std::cout << "Before swap: i(" << i << "), j(" << j << ")" << std::endl;
    swap(i, j);
    std::cout << "After swap: i(" << i << "), j(" << j << ")" << std::endl;

    char c = 'A';
    char d = 'B';
    std::cout << "min(" << c << ", " << d << "): " << min(c, d) << std::endl;
    d = c;
    std::cout << "If both are equals:" << std::endl;
    if (&min(c, d) == &c)
        std::cout << "Left parameter is returned" << std::endl;
    else
        std::cout << "Right parameter is returned" << std::endl;
    
    char e = 'A';
    char f = 'B';
    std::cout << "max(" << e << ", " << f << "): " << max(e, f) << std::endl;
    f = e;
    std::cout << "If both are equals:" << std::endl;
    if (&max(e, f) == &e)
        std::cout << "Left parameter is returned" << std::endl;
    else
        std::cout << "Right parameter is returned" << std::endl;
}
/* 
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
} */