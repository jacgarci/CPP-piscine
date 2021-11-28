#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> 
void display(T const &x)
{
    std::cout << x << std::endl;
    return; 
}

template <typename T>
void    iter(T *array, size_t size, void(*fnc)(T const &x))
{
    for (size_t i = 0; i < size; i++)
        (*fnc)(array[i]);
}

#endif