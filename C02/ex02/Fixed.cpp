#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

//CONSTRUCTORS

Fixed::Fixed(void) : _raw(0)
{
    
}

Fixed::Fixed(int const i) : _raw(i * (1 << Fixed::_fractionalBits))
{
    
}

Fixed::Fixed(float const f) : _raw(roundf(f * (1 << Fixed::_fractionalBits)))
{
    
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
    
}

//OPERATORS

Fixed   &Fixed::operator=(Fixed const &F)
{
    this->_raw = F.getRawBits();
    return (*this);
}

bool    Fixed::operator==(Fixed const &rhs)
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool    Fixed::operator!=(Fixed const &rhs)
{
    return (!operator==(rhs));
}

bool    Fixed::operator<(Fixed const &rhs)
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator>(Fixed const &rhs)
{
    return (!operator<(rhs));
}

bool    Fixed::operator<=(Fixed const &rhs)
{
    return (operator<(rhs) || operator==(rhs));
}

bool    Fixed::operator>=(Fixed const &rhs)
{
    return (operator>(rhs) || operator==(rhs));
}



//GETTERS SETTERS

int     Fixed::getRawBits(void) const
{
    return (this->_raw);
}

void    Fixed::setRawBits(int const raw)
{
    this->_raw = raw;
}

//OTHER FUNCTIONS

float   Fixed::toFloat(void) const
{
    return ((float) (this->getRawBits() / (float)(1 << Fixed::_fractionalBits)));
}

float   Fixed::toInt(void) const
{
    return (this->getRawBits() / (1 << Fixed::_fractionalBits));
}

std::ostream   &operator<<(std::ostream &o, Fixed const &F)
{
    o << F.toFloat();
    return (o);
}