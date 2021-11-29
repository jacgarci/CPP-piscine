#include "span.hpp"

Span::Span() : _N(0)
{

}

Span::Span(unsigned int const &N) : _N(N)
{

}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{

}

Span    &Span::operator=(Span const &rhs)
{
    _lst = rhs._lst;
    _N = rhs._N;
    return (*this);
}

void    Span::addNumber(int const &number)
{
    if (_N <= 0)
        throw VectorIsFull();
    _lst.push_back(number);
    _N--;  
}

long int Span::shortestSpan() const
{
    if (_lst.size() < 2)
        throw NotEnoughElements();

    std::vector<long int>   copy(_lst.begin(), _lst.end());
    std::vector<long int>::iterator  it;
    std::vector<long int>::iterator  ite = copy.end();

    long int result = LONG_MAX;
    for (it = copy.begin(); it != ite; it++)
    {
        std::vector<long int>::iterator it2;
        for (it2 = it + 1; it2 != ite; it2++)
        {
            if (*it != *it2)
            {
                if (std::abs(*it - *it2) < result)
                    result = std::abs(*it - *it2);
            }
        }
    }
    return (result);
}

long int Span::longestSpan() const
{
    if (_lst.size() < 2)
        throw NotEnoughElements();

    std::vector<long int>   copy(_lst.begin(), _lst.end());
    std::vector<long int>::iterator  it;
    std::vector<long int>::iterator  ite = copy.end();

    long int result = 0;
    for (it = copy.begin(); it != ite; it++)
    {
        std::vector<long int>::iterator it2;
        for (it2 = it + 1; it2 != ite; it2++)
        {
            if (*it != *it2)
            {
                if (std::abs(*it - *it2) > result)
                    result = std::abs(*it - *it2);
            }
        }
    }
    return (result);
}

void    Span::addNumberRange(t begin, t end)
{
    try
    {
        while (begin != end)
        {
            addNumber(*begin);
            begin++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}

const char* Span::VectorIsFull::what() const throw()
{
    return ("Vector is full. Can not add new element");
}

const char* Span::NotEnoughElements::what() const throw()
{
    return ("There is no span to find");
}







