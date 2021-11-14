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

    bool    operator==(Fixed const &rhs) const;
    bool    operator!=(Fixed const &rhs) const;
    bool    operator<(Fixed const &rhs) const;
    bool    operator>(Fixed const &rhs) const;
    bool    operator<=(Fixed const &rhs) const;
    bool    operator>=(Fixed const &rhs) const;

    Fixed   operator+(Fixed const &rhs) const;
    Fixed   operator-(Fixed const &rhs) const;
    Fixed   operator*(Fixed const &rhs) const;
    Fixed   operator/(Fixed const &rhs) const;

    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator++(int i);
    Fixed   operator--(int i);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    float   toInt(void) const;

    static Fixed        &min(Fixed &lhs, Fixed &rhs);
    static Fixed const  &min(Fixed const &lhs, Fixed const &rhs);
    static Fixed        &max(Fixed &lhs, Fixed &rhs);
    static Fixed const  &max(Fixed const &lhs, Fixed const &rhs);
    
};

std::ostream   &operator<<(std::ostream &o, Fixed const &F);

#endif