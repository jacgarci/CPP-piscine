#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>

typedef std::vector<int>::iterator t;

class Span
{
private:

    std::vector<int>    _lst;
    unsigned int        _N;
    Span();
    
public:

    Span(unsigned int const &N);
    Span(Span const &src);
    ~Span();

    Span    &operator=(Span const &rhs);

    void        addNumber(int const &number);
    void        addNumberRange(t begin, t end);
    long int    shortestSpan(void) const;
    long int    longestSpan(void) const;

    class   VectorIsFull : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class   NotEnoughElements : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

};

#endif