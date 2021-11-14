#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a(5);
    Fixed const b(5.05f);
    Fixed c(5.05f);
    Fixed d(5.06f);
    

    
    std::cout 
    << "a(" << a << ") "<< "b(" << b << "); " << "a == b ? " << (a == b) << std::endl
    << "a(" << a << ") "<< "b(" << b << "); " << "a != b ? " << (a != b) << std::endl
    << "a(" << a << ") "<< "b(" << b << "); " << "a < b ? " << (a < b) << std::endl
    << "a(" << a << ") "<< "b(" << b << "); " << "a > b ? " << (a > b) << std::endl
    << "c(" << c << ") "<< "b(" << b << "); " << "c <= b ? " << (c <= b) << std::endl
    << "c(" << c << ") "<< "b(" << b << "); " << "c >= b ? " << (c >= b) << std::endl
    << "d(" << d << ") "<< "b(" << b << "); " << "d <= b ? " << (d <= b) << std::endl
    << "d(" << d << ") "<< "b(" << b << "); " << "d >= b ? " << (d >= b) << std::endl
    << std::endl;
    return 0;
}