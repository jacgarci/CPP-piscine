#include "span.hpp"

int main()
{
    try
    {
        Span    a(0);

        a.addNumber(1);
        a.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    a(1);

        a.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Span    a(3);
    
    a.addNumber(2147483647);
    a.addNumber(-2147483648);

    std::cout << a.shortestSpan() << std::endl; 
    std::cout << a.longestSpan() << std::endl;

    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

   
    Span                c = Span(10001);
    std::vector<int>    range;
    for (int i = 0; i < 10000; i++)
        range.push_back(i % 10000);
    c.addNumberRange(range.begin(), range.end());
    
    

}