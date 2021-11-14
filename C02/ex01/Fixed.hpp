#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    
    int                 _raw;
    static int const    _fractionalBits;  

public:

    Fixed();
    Fixed(int const i);
    Fixed(float const f);
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed   &operator=(Fixed const &F);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    float   toInt(void) const;
};

std::ostream   &operator<<(std::ostream &o, Fixed const &F);
#endif