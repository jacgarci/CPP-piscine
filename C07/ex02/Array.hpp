#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
private:

    T       *_arrayPtr;
    size_t  _size;
    
public:

    Array() : _arrayPtr(new T[0]()), _size(0) {};
    Array(unsigned int const &n) : _arrayPtr(new T[n]()), _size(n) {};
    Array(Array const &src) {*this = src;};
    ~Array() {delete [] _arrayPtr;};

    Array   &operator=(Array const &rhs)
    {
        if (this == &rhs)
            return (*this);
        _arrayPtr = new T[rhs._size];
        _size = rhs._size;
        for (size_t i = 0; i < _size; i++)
            _arrayPtr[i] = rhs._arrayPtr[i];
        return (*this);
    };
    
    T   &operator[](size_t const &n) const
    {
        if (n >= _size)
            throw std::out_of_range("Index out of bounds");
        return (_arrayPtr[n]);
    };

    size_t const &size(void)
    {
        return (_size);
    }
};



#endif