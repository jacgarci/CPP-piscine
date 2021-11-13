#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    
    int                 _width;
    static int const    _fractionalBits;  

public:

    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed   &operator=(Fixed const &F);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif