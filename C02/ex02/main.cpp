#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a(5);
    Fixed const b(5.05f);
    Fixed c(5.05f);
    Fixed d(5.06f);
    Fixed e(10);
    Fixed f(e);
    Fixed g(0);
    Fixed j;
    

    
    std::cout 
    << "j(" << j << ") " << "j = a ? " << (j = a) << std::endl
    << "a(" << a << ") " << "b(" << b << "); " << "a == b ? " << (a == b) << std::endl
    << "a(" << a << ") " << "b(" << b << "); " << "a != b ? " << (a != b) << std::endl
    << "a(" << a << ") " << "b(" << b << "); " << "a < b ? " << (a < b) << std::endl
    << "a(" << a << ") " << "b(" << b << "); " << "a > b ? " << (a > b) << std::endl
    << "c(" << c << ") " << "b(" << b << "); " << "c <= b ? " << (c <= b) << std::endl
    << "c(" << c << ") " << "b(" << b << "); " << "c >= b ? " << (c >= b) << std::endl
    << "d(" << d << ") " << "b(" << b << "); " << "d <= b ? " << (d <= b) << std::endl
    << "d(" << d << ") " << "b(" << b << "); " << "d >= b ? " << (d >= b) << std::endl
    << "e(" << e << ") " << "f(" << f << "); " << "e + f ? " << (e + f) << std::endl
    << "e(" << e << ") " << "f(" << f << "); " << "e - f ? " << (e - f) << std::endl
    << "e(" << e << ") " << "f(" << f << "); " << "e * f ? " << (e * f) << std::endl
    << "e(" << e << ") " << "f(" << f << "); " << "e / f ? " << (e / f) << std::endl
    << "g(" << g << "); " << "++g ? " << (++g) << std::endl
    << "g(" << g << "); " << "--g ? " << (--g) << std::endl
    << "g(" << g << "); " << "g++ ? " << (g++) << std::endl
    << "g(" << g << "); " << "g-- ? " << (g--) << std::endl
    << "g(" << g << "); ? " << g << std::endl
    << "c(" << c << ") " << "d(" << d << "); " << "min(c, d) ? " << Fixed::min(c, d) << std::endl
    << "c(" << c << ") " << "d(" << d << "); " << "max(c, d) ? " << Fixed::max(c, d) << std::endl
    << std::endl;
    return 0;
}