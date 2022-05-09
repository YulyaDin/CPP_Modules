#pragma once
#include <stack>

/* 
** Just a simple example how it works
** If we want to get an iterator to the beginning of the given range,
** we can use the next template
** template<class C>
** auto begin(C& c) -> decltype(c.begin());
** c - a container or view with a begin member function
** For more examples, please refer to https://en.cppreference.com/w/cpp/iterator/end
*/

template <typename T>
struct MutantStack : std::stack<T>
{
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void)
	{
		return this->c.begin();
	}

	const_iterator cbegin(void) const
	{
		return this->c.cbegin();
	}

	reverse_iterator rbegin(void)
	{
		return this->c.rbegin();
	}

	const_reverse_iterator crbegin(void) const
	{
		return this->c.crbegin();
	}

	iterator end(void)
	{
		return this->c.end();
	}

	const_iterator cend(void) const
	{
		return this->c.cend();
	}

	reverse_iterator rend(void)
	{
		return this->c.rend();
	}

	const_reverse_iterator crend(void) const
	{
		return this->c.crend();
	}
};
