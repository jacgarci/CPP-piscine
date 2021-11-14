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

//Comparison operators (arguments are not modified)
bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (!operator==(rhs));
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (!operator<(rhs));
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (operator<(rhs) || operator==(rhs));
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (operator>(rhs) || operator==(rhs));
}


//Arithmetic operators (arguments are not modified)
Fixed   Fixed::operator+(Fixed const &rhs) const
{
    Fixed   result;

    result.setRawBits(this->getRawBits() + rhs.getRawBits());
    return (result);
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    Fixed   result;

    result.setRawBits(this->getRawBits() - rhs.getRawBits());
    return (result);
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    Fixed   result;

    result.setRawBits((this->getRawBits() * rhs.getRawBits()) / (1 << Fixed::_fractionalBits));
    return (result);
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    Fixed   result;

    result.setRawBits((this->getRawBits() / rhs.getRawBits()) * (1 << Fixed::_fractionalBits));
    return (result);
}

//Increment/Decrement operators
//**Pre-increment/decrement (returns a reference to the result)
Fixed   &Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed   &Fixed::operator--(void)
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

//**Post-increment/decrement (creates a copy of the object, 
//increments or decrements the value of the object and 
//returns the copy from before the increment or decrement.)
Fixed   Fixed::operator++(int i)
{
    (void)i;
    Fixed   copy(*this);

    this->operator++();
    return (copy);
}

Fixed   Fixed::operator--(int i)
{
    (void)i;
    Fixed   copy(*this);

    this->operator--();
    return (copy);
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

Fixed        &Fixed::min(Fixed &lhs, Fixed &rhs)
{
    return ((lhs < rhs) ? lhs : rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
    return ((lhs < rhs) ? lhs : rhs);
}

Fixed        &Fixed::max(Fixed &lhs, Fixed &rhs)
{
    return ((lhs > rhs) ? lhs : rhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
    return ((lhs > rhs) ? lhs : rhs);
}

std::ostream   &operator<<(std::ostream &o, Fixed const &F)
{
    o << F.toFloat();
    return (o);
}