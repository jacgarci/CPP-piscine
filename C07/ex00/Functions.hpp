#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template <typename T>
void    swap(T &lhs, T &rhs)
{
    T   aux;

    aux = lhs;
    lhs = rhs;
    rhs = aux;
}

template <typename T>
T const &min(T const &lhs, T const &rhs)
{
    return (lhs < rhs ? lhs : rhs);
}

template <typename T>
T const &max(T const &lhs, T const &rhs)
{
    return (lhs > rhs ? lhs : rhs);
}

#endif