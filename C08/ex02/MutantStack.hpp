#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>
# include <deque>
# include <list>

template< class T, class U = std::deque<T> >
class MutantStack : public std::stack<T, U>
{
public:

    typedef typename U::iterator    iterator;
    MutantStack() : std::stack<T, U>(){};
    MutantStack(MutantStack const &src) : std::stack<T, U>(src) {};
    virtual ~MutantStack() {};

    MutantStack &operator=(MutantStack const &rhs)
    {
        if (this == rhs)
            return (*this);
        std::stack<T, U>::operator=(rhs);
        return (*this);
    };

    iterator    begin(void)
	{
		return (this->c.begin());
	};

	iterator    end(void)
	{
		return (this->c.end());
	};

};



#endif