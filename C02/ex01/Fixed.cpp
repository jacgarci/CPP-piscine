#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _raw(i * (1 << Fixed::_fractionalBits))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _raw(roundf(f * (1 << Fixed::_fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &F)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_raw = F.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return (this->_raw);
}

void    Fixed::setRawBits(int const raw)
{
    this->_raw = raw;
}

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